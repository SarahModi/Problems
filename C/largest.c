#include <stdio.h>

int main(){
    int num1;
    int num2;
    int largest;

    printf("Enter number: ");
    scanf("%d", &num1);

    printf("Enter number again: ");
    scanf("%d", &num2);
    
 
    if (num1 > num2){
       largest = num1;
    }
    else{
        largest = num2;
    }
   printf("largest number is %d", largest);

    return 0;
}
