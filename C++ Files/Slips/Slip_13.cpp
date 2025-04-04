// Q1.Write a C++ program to implement a class ‘student’ to overload following functions as follows:
// a. int maximum(int, int) – returns the maximum score of two students
// b. int maximum(int *a, int arraylength) – returns the maximum score from an array ‘a’

****************
#include <iostream>
using namespace std;

class Student {
public:
    // Function to return the maximum of two scores
    int maximum(int a, int b) {
        return (a > b) ? a : b;
    }
           
    // Function to return the maximum score from an array
    int maximum(int *a, int arrayLength) {
        int maxScore = a[0]; // Assume the first element is the maximum
        for (int i = 1; i < arrayLength; i++) {
            if (a[i] > maxScore) {
                maxScore = a[i];
            }
        }
        return maxScore;
    }
};

int main() {
    Student s;

    // Test the first maximum function
    int score1 = 85;
    int score2 = 90;
    cout << "Maximum score between " << score1 << " and " << score2 << " is: "
         << s.maximum(score1, score2) << endl;

    Student s2;
    int score[] = {10, 20, 120, 30, 60, 100, 10};
    int size = sizeof(score) / sizeof(score[0]); 
    cout << "Maximum in array: " << s2.maximum(score, size) << endl;
    
    return 0;
}


/* Q2.Write a C++ program to create a class Distance which contains data members as kilometer, meter.
Write a program to perform the following functions
a.To accept distance
b.To display distance
c.To overload > operator to compare two distance */

#include<iostream>
using namespace std;

class Distance {
    public :
        int kilometer;
        int meter;
    void accept(){
        cout<<"Enter kilometer : ";
        cin>>kilometer;

        cout<<"Enter meter : ";
        cin>>meter;

        if(meter >=1000){
            kilometer += meter / 1000;
            meter = meter % 1000;
        }
    }

    void display(){
        cout<<"Distance in Kilometers : "<<kilometer<<"Km"<<endl;
        cout<<"Distance in Meters : "<<meter<<"m"<<endl;
    }

    bool operator>(const Distance & d) const{
        int totalMeter1 = kilometer * 1000 + meter;
        int totalMeter2 = d.kilometer * 1000 + d.meter;
        return totalMeter1 > totalMeter2;
    }
};
int main(){
    Distance d1,d2;

    cout<<"Enter Distance 1"<<endl;
    d1.accept();
    cout<<"Enter Distance 2"<<endl;
    d2.accept();

    cout<<"Distance 1"<<endl;
    d1.display();
    cout<<"Distance 2"<<endl;
    d2.display();

    if(d1 > d2){
        cout<<"The Distance 1 IS GREATER!!"<<endl;
    }else{
        cout<<"The Distance 2 IS GREATER!!"<<endl;
    }
    
    return 0;
}
