#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("string:");
    fgets(str, sizeof(str), stdin);

    printf("length = %lu", strlen(str));
    return 0;

}
