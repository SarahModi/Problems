#include <iostream>
using namespace std;

void func(int arr[]){
    arr[0] = 1000;
}

void func2(int *ptr){
    ptr[0] = 1000;
}

int main(){
    int a = 5;
    int *ptr = &a;
    cout << ptr << endl;

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);

    func(arr); //passing array name is equal to passing the pointer
        cout << arr[0] << endl;

    return 0;

}