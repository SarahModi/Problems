/*
Write a program to check whether a number is divisible by 2 or not
*/


#include <stdio.h>
#include <math.h>

int main(){
  int x;
  printf("Enter a number: ");
  scanf("%d", &x);
   printf("%d", x % 2 == 0); //if x = 0 print true(1) else print false(0)

  return 0;
}
