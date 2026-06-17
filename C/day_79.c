#include <stdio.h>

int main()
{
    int var = 450;
    int *ptr = &var; 

    printf("%d", *ptr);
    return 0;
}

/* 
Output
450
*/
