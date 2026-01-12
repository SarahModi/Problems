//Write a program to calculate area of a circle (pi.r^2)(radius is given)
# include <stdio.h>

int main(){
  float radius;
  printf("enter  radius: ");
    scanf("%f", &radius);
    
  printf("area is: %f", 3.14 * radius * radius);
  return 0;
}
