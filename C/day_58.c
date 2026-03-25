#include <stdio.h>

int main()
{

    char str[4];
    
    printf("enter string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("you entered: ");
    puts(str);
    
    return 0;
}
