/*
"Write a Program to give grades to a student

marks < 30 is C
30 <= marks < 70 is B
70 <= marks < 90 is A
90 <= marks <= 100 is A+"
*/

#include <stdio.h>

int main(){
  int Marks; 
  printf("enter your Marks : ");
  scanf("%d", &Marks);

if(Marks < 30){
  printf("C \n");
}
  else if (30 <= Marks && Marks < 70){
    printf("B \n");
  }
  else if (70 <= Marks && Marks < 90){
      printf ("A \n");
  }
  else{
    printf("A+");
  }

return 0;
}
