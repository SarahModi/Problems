#include <stdio.h>

int main()
{
    int a, b;
    char op;
    
    printf("first number: ");
    scanf("%d", &a);
    
    printf("second number: ");
    scanf("%d", &b);
    
    printf("operator: ");
    scanf(" %c", &op);
    
    switch(op)
    {
        case '+':
        printf("result = %d", a+b);
        break;
        
        case '-':
        printf("result = %d", a-b);
        break;
        
        case '*':
        printf("result = %d", a*b);
        break;
        
        case '/':
        printf("result = %d", a/b);
        break;
        
        case '%':
        printf("result = %d", a%b);
        break;
        
        default:
        printf("Invalid operator");
    }
    return 0;
}
