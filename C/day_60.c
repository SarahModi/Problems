//Non-Recursive
#include <stdio.h>

int main(){
	
    int a, i;
    long int fact = 1;

    printf("Enter a number: ");
    scanf("%d", &a);

    for (i = 1; i<=a; i++)
    {
        fact = fact*i;
    }

    printf("Factorial = %ld", fact);

    return 0;
}
