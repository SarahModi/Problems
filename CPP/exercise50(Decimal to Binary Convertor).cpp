#include <iostream>
using namespace std;

// Binary to Decimal

    void decToBin(int decNum){

        int n = decNum;
        int binNum = 0;
        int pow = 1; //10^0, 10^1..

        while(n > 0){
            int rem = n % 2;
            binNum += rem * pow;
            n = n/2;
            pow = pow * 10;

        }

        cout << binNum << endl;
    }

        int main()
        { 
            decToBin(8);
            return 0;
        }
