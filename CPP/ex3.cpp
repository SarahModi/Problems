//Calculate Sum and Average of Array
//How do I create the array?
//How do I print the array?
//How do I calculate the sum?
//How do I calculate the average?

#include <iostream>
using namespace std;

int main(){
    int num[8] = {3,4,5,6,7,8,9,0};
    int sum = 0;
    int avg = 0;

    for(int i = 0; i < 5; ++i){
        cout << num[i] << " ";
        sum += num[i];
    }
    avg = sum/8;
    cout << "\nSum: " << sum;
    cout << "\nAvg: " << avg;

    return 0;
}

