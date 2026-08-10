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
    
    int largest = arr[0];
    int smallest = arr[0];
    
    for(int i = 0; i<size; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
        
       if(arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
      
    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;

    return 0;
}
