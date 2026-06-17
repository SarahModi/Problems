#include <stdio.h>
#include <stdint.h>
#include <x86intrin.h>

volatile unsigned char data[1024];
volatile unsigned char temp;

int main() {

    printf("=== CACHE TIMING DEMO ===\n\n");

    // STEP 1: Put the value into cache
    data[0] = 42;

    // Access once so CPU loads it into cache
    temp = data[0];

    // STEP 2: Measure CACHE HIT
    unsigned int aux;

    uint64_t start_hit = __rdtscp(&aux);
    temp = data[0];
    uint64_t end_hit = __rdtscp(&aux);

    // STEP 3: Force CPU to remove this cache line
    _mm_clflush((void*)&data[0]);

    // STEP 4: Measure CACHE MISS
    uint64_t start_miss = __rdtscp(&aux);
    temp = data[0];
    uint64_t end_miss = __rdtscp(&aux);

    printf("Cache HIT  : %llu cycles\n", end_hit - start_hit);
    printf("Cache MISS : %llu cycles\n", end_miss - start_miss);

    return 0;
}