//Reverse an array in-place
#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int size = 5;

    cout << "Enter 5 elements: ";

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int left = 0;
    int right = size - 1;

    while(left < right){
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        
        left++;
        right --;
    }
    
    cout << "reversed arrary: ";
    
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
