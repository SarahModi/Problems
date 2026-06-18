/*Count how many even numbers are entered.*/

#include <stdio.h>

int main(){

    int num;
    int count=0;

    printf("Enter 5 numbers: ");
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &num);
    
    
    if (num % 2 == 0)
     {
        count++;
     }
    }
    printf("even count: %d", count);
    return 0;
}
