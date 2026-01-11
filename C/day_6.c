//Project: Take user's desired numbers and add them and print the answer.
# include <stdio.h>

int main(){

  int a, b;

  printf("enter a no ");
  scanf("%d", &a);

  printf("enter a no again ");
  scanf("%d", &b);

  int sum = a + b; //here the = sign (the assignment operator) will calculate the value of a+b and place it inside the sum container
  printf("sum is: %d", sum);
  
  return 0;
}
