/*Count how many negative numbers were entered.*/

#include <stdio.h>

int main(){
    int num;
    int count=0;

    printf("Enter 5 numbers: ");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num);
    
    if (num<0)
      {
        count++;
      }
    }
    printf("negative count: %d\n", count);
    return 0;
}

/*
fundamentals of:

Variables
Input/Output
if statements
for loops
Counters
*/
