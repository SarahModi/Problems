//Ternary Operator

#include <stdio.h>

int main(){
  int age;
  printf("Enter age: ");
  scanf("%d", &age);

  age >= 18? printf("Adult\n") : printf("Not Adult"); //but used only for single statement conditions

  return 0;
}
