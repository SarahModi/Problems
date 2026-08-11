//Find duplicate elements in an array
#include <iostream>
using namespace std;

int main()
{
    int arr[8];
    int size = 8;

    cout << "Enter 8 elements: ";

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    int newSize = 1;
    
    for(int i = 1; i < size; i++)
    {
            if(arr[i] != arr[newSize - 1])
            {
            arr[newSize] = arr[i];
            newSize++;
            }
    }        
            
        cout << "Array after removing duplicates: ";

    for(int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";    
    }

    return 0;
}
