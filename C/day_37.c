//Write a program to check whether a student passed or failed
/*
Marks > 30 is PASS
Marks < 30 is FAIL
*/
#include <stdio.h>

int main(){
  int Marks; 
  printf("enter your Marks : ");
  scanf("%d", &Marks);

if (Marks >= 30) {
  printf("PASSED\n");
   if (Marks % 2 == 0){
     printf("Your score is an Even number, this means you get 1000$\n");
   }
  else{
    printf("Your score is an Odd number, this means you get no $\n");
  }
} else {
  printf("Failed");
}
return 0;
}

//My solution using nested if idky
