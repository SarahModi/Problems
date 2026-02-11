/*
"Write a Program to find if a character entered by user is upper case or not
*/

#include <stdio.h>

int main(){
  char ch;
  printf("Enter a character: ");
  scanf(" %c", &ch);
  
  if(ch >= 'A' && ch <= 'Z'){
      printf ("UpperCase");
  }
  else if(ch >= 'a' && ch <= 'z') {
      printf("LowerCase");
  }
  else{
      printf("Not English Letter");
  }
  
return 0;
}
