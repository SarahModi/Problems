//SWITCH
#include <stdio.h>

int main(){
  int day; //1-mon,2-tue,3-wed
  printf("enter day (1-7): ");
  scanf("%d", &day);
  
  switch (day) {
   case 1: printf("Monday \n");
           break;
   case 2: printf("Tuesday \n");
           break;
   case 3: printf("Wednesday \n");
           break;
   case 4: printf("Thursday \n");
           break;
   case 5: printf("Friday \n");
           break;
   case 6: printf("Saturday \n");
           break;
   case 7: printf("Sunday \n");
           break;
   defualt : printf("Not a valid day");        
         
  }
  return 0;
}
//The moment the variable "day" is containing containing some value, the switch statment begins to search for the value that matches the input stored by the user with the given cases. Then prints the output of the case
