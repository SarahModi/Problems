/*
Count Positive Numbers.
Ask the user to enter 5 numbers.
and the prgoram tells the number of positive numbers in the users input
*/

#include <stdio.h>

int main()
{
int num;
int positive_count = 0;

printf("Enter 5 numbers:");


for (int i = 0; i < 5; i++)
{
  scanf("%d", &num);

  if (num>0)
  {  
  positive_count++;
  }
   
}
printf("Positive count: %d", positive_count);
return 0;
}

/*
learned:
for
if
scanf
printf
variables
counters
*/

