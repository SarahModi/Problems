#include <iostream>
using namespace std;
//2 pointer approach

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main() {
     int arr[] = {5, 4, 3, 9, 2};
    const int n = sizeof(arr) / sizeof(int);

    int start = 0, end = n-1;

    while(start < end) {
        swap(arr[start], arr[end]); //in built swapping funtion to avoid 
        start++;
        end--;
    }

    printArr(arr, n);

    return 0;

}