/*
Print 1 or 0 for the following statement
If it is not updated and it is Vulnerable: true
*/
#include <stdio.h>
#include <math.h>

int main(){
  int notUpdated = 1;
  int isVulnerable = 1;
  printf("%d", notUpdated && isVulnerable);

  return 0;
}

/*
Output 
1
*/
//------------------------------------------

#include <stdio.h>
#include <math.h>

int main(){
  int notUpdated = 0;
  int isVulnerable = 1;
  printf("%d", notUpdated && isVulnerable);

  return 0;

/*
Output 
0
*/


  
}
