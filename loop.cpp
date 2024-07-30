#include <iostream>
using namespace std;
int main() {
    int num = 4;
    int fact = 1;
//Using if loop
    if (num % 2 == 0) {
        cout << num << " is even" << endl;
    } else {
        cout << num << " is odd" << endl;
    }
//Using for loop for getting factorial

    for (int i = num; i>0; i--) {
       fact = fact*i;
    }
    cout<<"Factorial is: "<<fact<<endl;

//Using While Loop
    int j = 0;
    while (j < 5) {
        cout << "j = " << j << endl;
        j++;
    }

    return 0;
}
