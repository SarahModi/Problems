
#include <stdio.h>
#include <math.h>

int main(){
  int r;

  printf("enter a number: ");
  scanf("%d", &r);
  printf("%d", r>9 && r<100);

  return 0;
}
//Will be true only if number has 2 digits
