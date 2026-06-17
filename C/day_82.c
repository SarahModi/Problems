/*
Create an array of 5 integers.
Print:

Value of each element
Address of each element
Difference between two consecutive addresses

Goal: Prove arrays are stored in contiguous memory.
*/

#include<stdio.h>

int main()
{
  int arr[5]={10,2,30,4,50};

  for(int i = 0; i < 5; i++)
  {
      printf("Value: %d | Address: %p\n", arr[i], &arr[i]);
      
    if (i > 0)
    {
        printf("Difference: %td bytes\n", 
         (char*)&arr[i] - (char*)&arr[i-1]);
    }
  }
    
  return 0;
}

/*
OUTPUT
Value: 10 | Address: 0x7ffc407721c0
Value: 2 | Address: 0x7ffc407721c4
Differnce: 4 bytes
Value: 30 | Address: 0x7ffc407721c8
Differnce: 4 bytes
Value: 4 | Address: 0x7ffc407721cc
Differnce: 4 bytes
Value: 50 | Address: 0x7ffc407721d0
Differnce: 4 bytes
*/
