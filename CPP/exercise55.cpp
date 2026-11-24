#include <iostream>
using namespace std;

// void changeA(int param)
// {
//     param = 20;
//     cout << param << endl;
    
// }

//Pass by reference using pointer

void changeA(int *ptr)
{

    *ptr = 20; //dereferencing operator
    cout << *ptr << endl;
} 

int main() 
{
    int a = 10;
    changeA(&a);
    
    cout << a << endl;

    return 0;
}