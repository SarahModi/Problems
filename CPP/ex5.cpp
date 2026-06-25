/*
Create an integer array containing 6 numbers. Without manually counting the elements, 
determine how many elements are stored in the array using the sizeof operator and print the result.
*/

#include <iostream>
using namespace std;

int main(){
    int num[] = {1,2,3,4,5,6};
    int a = sizeof(num);
    int b = sizeof(num[0]);
    int size = sizeof(num)/sizeof(num[0]);

    cout << "sizeof(num): " << a << endl;
    cout << "sizeof(num[0]): " << b << endl;
    cout << "size of array is: " << size << endl;

    return 0;
}
