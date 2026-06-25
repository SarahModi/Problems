//Access different elements of an array
#include <iostream>
using namespace std;

int main(){

    string fruits[5] = {"banana", "strawberry", "mango", "pineapple", "kiwi"};

    cout << "First Fruit: " << fruits[0] << endl;
    fruits[0] = "mango";
    cout << "Modified First Fruit: " << fruits[0];

    return 0;
}
