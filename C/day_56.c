#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a whose digits are to be added: \n");
    scanf("%d", &num);

    while(num!=0)
    {
       sum += num%10;
       num = num/10;

    }
    printf("Sum of digit = %d", sum);
    return 0;
