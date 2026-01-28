/*
! NOT: To flip the result of the output from true to false and from false to true
*/

#include <stdio.h>
#include <math.h>

int main(){
  printf("%d \n", !(5>2));//true but will print false becuase it flips result

  return 0;
}

/* 
Output
0
*/


#include <stdio.h>
#include <math.h>

int main(){
  printf("%d \n", !(5<10)); //false but will print true becuase it flips result

  return 0;
}

/* 
Output
1
*/
