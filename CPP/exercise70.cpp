#include <iostream>
using namespace std;

void printSubarrays(int *arr, int n){
    for(int start = 0; start < n; start++) { //outer loop
        for (int end = start; end < n; end++){ //inner loop
            // cout << "(" << start << "," << end << ") ";
            for(int i = start; i <= end; i++) {//inner's inner loop
                cout << arr[i];
            }
            cout << ",";
        }
        cout << endl;
    }
}

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int n = 5;

    printSubarrays(arr, n);
     return 0; 


}