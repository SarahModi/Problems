//sizeof()
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a; //only stores hexadecimal addresses

    float dec = 97.1;
    float *ptr2 = &dec;

    cout << sizeof(ptr) << endl;
    cout << sizeof(ptr2) << endl;

    
    // cout << &dec << " = " << ptr2 << endl;
    // cout << &a << " = " << ptr << endl;


    return 0;
}