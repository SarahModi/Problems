//SWITCH
#include <stdio.h>

int main(){
  char day; //m-mon,t-tue,w-wed
  printf("enter day : ");
  scanf("%s", &day);
  
  switch (day) {
   case 'm': printf("Monday \n");
           break;
   case 't': printf("Tuesday \n");
           break;
   case 'w': printf("Wednesday \n");
           break;
   case 'T': printf("Thursday \n");
           break;
   case 'f': printf("Friday \n");
           break;
   case 's': printf("Saturday \n");
           break;
   case 'S': printf("Sunday \n");
           break;
   defualt : printf("Not a valid day");        
         
  }
  return 0;
}
