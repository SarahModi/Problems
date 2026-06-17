#include <stdio.h>

int main()
{
    int var = 450;
    int *ptr = &var; 

    printf("%p", *ptr);
    return 0;
}
/*
Change the format specifier to p from d and it will give you the memory address of a variable in hexadecimal format.
*/
