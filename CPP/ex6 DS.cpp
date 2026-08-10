//Array traversal: visiting or accessing each element of an array exactly once in a sequential order

#include <iostream>
using namespace std;

int main(){
   int arr[7], i;
   for(i=0; i<7; i++)
   {
    cin>>arr[i];
   }
   for(i=0; i<7; i++)
   {
   cout<<arr[i]<<" ";
   }
 return 0;
}
