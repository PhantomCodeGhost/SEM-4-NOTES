// Q1. Write a C++ program to create a class Number which contains two integer data members. Create
// and initialize the object by using default constructor, parameterized constructor. Write a
// member function to display maximum from given two numbers for all objects. 

#include<iostream>
using namespace std;

class Number{

    public :
        int a;
        int b;
        // Default constructor
        Number(){
            cout<<"Enter num1 & num2 : ";
            cin>>a>>b;

        }

        // Parameterized constructor
        Number(int a, int b): a(a), b(b){}
     
        void Max(){
            cout<<"Max : "<<((a > b) ? a : b)<<endl; 
        }
};
int main(){
    Number n1;
    n1.Max();

    Number n2(5,10);
    n2.Max();

}



/* Q2. Create two base classes Learn_Info(Roll_No, Stud_Name, Class, Percentage) and
Earn_Info(No_of_hours_worked, Charges_per_hour). Derive a class Earn_Learn_info from
above two classes. Write necessary member functions to accept and display Student
information. Calculate total money earned by the student. (Use constructor in derived class) */

#include <iostream>
#include <string>
using namespace std;

// Base class 1: Learn_Info
class Learn_Info {
protected:
    int Roll_No;
    string Stud_Name;
    string Class;
    float Percentage;

public:
    // Constructor to initialize Learn_Info
    Learn_Info(int roll, string name, string cls, float percent)
        : Roll_No(roll), Stud_Name(name), Class(cls), Percentage(percent) {}

    // Function to display Learn_Info
    void displayLearnInfo() const {
        cout << "Roll No: " << Roll_No << endl;
        cout << "Student Name: " << Stud_Name << endl;
        cout << "Class: " << Class << endl;
        cout << "Percentage: " << Percentage << "%" << endl;
    }
};

// Base class 2: Earn_Info
class Earn_Info {
protected:
    int No_of_hours_worked;
    float Charges_per_hour;

public:
    // Constructor to initialize Earn_Info
    Earn_Info(int hours, float charges)
        : No_of_hours_worked(hours), Charges_per_hour(charges) {}

    // Function to calculate total money earned
    float calculateEarnings() const {
        return No_of_hours_worked * Charges_per_hour;
    }

    // Function to display Earn_Info
    void displayEarnInfo() const {
        cout << "No of Hours Worked: " << No_of_hours_worked << endl;
        cout << "Charges per Hour: $" << Charges_per_hour << endl;
        cout << "Total Earnings: $" << calculateEarnings() << endl;
    }
};

// Derived class: Earn_Learn_Info
class Earn_Learn_Info : public Learn_Info, public Earn_Info {
public:
    // Constructor to initialize both base classes
    Earn_Learn_Info(int roll, string name, string cls, float percent, int hours, float charges)
        : Learn_Info(roll, name, cls, percent), Earn_Info(hours, charges) {}

    // Function to display all information
    void displayAllInfo() const {
        displayLearnInfo(); // Display Learn_Info
        displayEarnInfo(); // Display Earn_Info
    }
};

int main() {
    // Create an object of the derived class
    Earn_Learn_Info student(101, "John Doe", "10th", 85.5, 20, 15.5);

    // Display all information
    cout << "Student Information:" << endl;
    student.displayAllInfo();

    return 0;
}