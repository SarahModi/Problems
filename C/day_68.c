// swapping variables without using extra variable
#include <stdio.h>

int main(){
int a, b;

printf("Enter 2 integers: ");
scanf("%d %d", &a,&b);
printf("Before swapping: a=%d, b=%d\n", a,b);

a = a + b;
b = a - b;
a = a - b;

printf("After swapping: a=%d, b=%d", a,b);
    
return 0;
}
