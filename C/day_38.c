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

if(Marks >=0 && Marks <= 30){
  printf("FAILED!");
}
  else if (Marks >= 30 && Marks <= 100){
    printf("PASSED!");
  }
  else{
    printf("Not valid marks. write a number in the range (1-100)");
  }

return 0;
}

//TERNARY
#include <stdio.h>

int main(){
  int Marks; 
  printf("enter your Marks : ");
  scanf("%d", &Marks);

Marks <= 30? printf("Failed!") : printf("PASSED!");

  return 0;
}


