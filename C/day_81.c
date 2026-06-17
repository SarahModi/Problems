#include <stdio.h>

int main()
{
    int arr[9]= {1,2,3,4,5,6,7,8,9};  

   for (int i = 0; i < 9; i++)
   {
     printf("Value : %d | address : %p\n", arr[i], &arr[i]);
   }
    return 0;
}

/*
OUTPUT
Value : 1 | address : 0061FEF8
Value : 2 | address : 0061FEFC
Value : 3 | address : 0061FF00
Value : 4 | address : 0061FF04
Value : 5 | address : 0061FF08
Value : 6 | address : 0061FF0C
Value : 7 | address : 0061FF10
Value : 8 | address : 0061FF14
Value : 9 | address : 0061FF18
*/
