//Find duplicate elements in an array
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
    
    cout << "Duplicate Elements: ";
    
    for(int i = 0; i < size; i++)
    {
        
        for(int j = i + 1; j < size; j++)
        {
            
            if(arr[i] = arr[j])
            {
            cout << arr[i] << " ";
            break;
            }
        }
    }


    return 0;
}
