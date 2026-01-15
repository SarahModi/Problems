//Q int a = 1.99999;
//wht will the output be? 1 or 2?

#include <stdio.h>

int main(){
  int a =  (int) 1.999999;
  printf("%d", a);
  return 0;
}

//**the ans is 1 because the compiler doesnt round off, it straight away removes the decimals and stores 1 in this case**//
