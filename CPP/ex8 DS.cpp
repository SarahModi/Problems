//Finding the second largest element in array
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
    int secondlargest = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > largest)
        {
            secondlargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }
    }
    cout << "Largest element: " << largest << endl;
    cout << "Second largest element: " << secondlargest << endl;

    return 0;
}
