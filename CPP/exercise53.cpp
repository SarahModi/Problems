//pointers to pointers pptr
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a; //only stores hexadecimal addresses

    int **pptr = &ptr;

   cout << &ptr << " = " << pptr << endl;


    return 0;
}