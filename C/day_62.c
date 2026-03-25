#include <stdio.h>

int main()
{
    char str[100], sub[100];
    int i, pos, n;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter starting position: ");
    scanf("%d", &pos);
    
    printf("Enter number of characters: ");
    scanf("%d", &n);
    
    for (i=0; i<n; i++)
    {
        sub [i] = str[pos - 1 + i];
    }
    sub[i] = '\0';
    printf("extracted string= %s", sub);

    return 0;
}

