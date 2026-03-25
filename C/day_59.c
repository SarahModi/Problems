#include <stdio.h>

int main(){
	
    int a, b;

    printf("enter first number: ");
    scanf("%d", &a);

    printf("enter second nummber: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("Largest number = %d", a);
    }
    else
    {
        printf("Largest number = %d", b);
    }
    return 0;
}
