// print numbers from 0 to n, if n is given by user
#include <stdio.h>
int main(){
  int n;
  printf("enter number: ");
  scanf("%d", &n);
 
  int i=0;
  while (i<=n){
      printf("%d\n", i);
      i++;
  }
  return 0;
    
}

/*Output
enter number: 8
0
1
2
3
4
5
6
7
8
*/
