// Q1. Write a C++ program to display factors of a number. 

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}

// Q2 SAME AS SLIP6 QUES LAST...



