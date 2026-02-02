//if-else
#include <stdio.h>

int main(){
  int age;
  printf("Enter age: ");
  scanf("%d", &age);

    if (age > 17){
    printf("Adult \n");
    printf("You can vote \n");
    printf("You can drive \n"); 
    printf("You can do anything you like :) \n");
    }
  else
  {
    printf("Not Adult \n");
    printf("shh... study \n");
  }

  
  printf("Thanks for visiting");
  
  return 0;
}
