// Q1.Write a C++ program to accept length and width of a rectangle. Calculate and display perimeter
// as well as area of a rectangle by using inline function.

#include<iostream>
using namespace std;

inline float perimeterofRectangle(float l, float b){
    return 2 *(l + b);
}
inline float areaofRectangle(float l, float b){
    return l * b;
}
int main(){
    float length , breadth;
    cout<<"Enter Length and Breadth : ";
    cin>>length>>breadth;

    cout<<"Area of Reactangle : "<<areaofRectangle(length,breadth)<<endl;
    cout<<"Perimeter of Reactangle : "<<perimeterofRectangle(length,breadth)<<endl;
}



/* Q2. Implement the following class hierarchy:
Employee: code, ename, desg
Manager (derived from Employee): year_of_experience, salary
Define appropriate functions to accept and display details.Create n objects of the manager class and display the records.
Write main function that uses the above class and its member functions */


#include <iostream>
#include <string>
using namespace std;

// Base class: Employee
class Employee {
protected:
    int code;
    string ename;
    string desg;

public:
    // Function to accept employee details
    void acceptEmployeeDetails() {
        cout << "Enter Employee Code: ";
        cin >> code;
        cout << "Enter Employee Name: ";
        cin.ignore(); // To ignore the newline character left by previous input
        getline(cin, ename);
        cout << "Enter Employee Designation: ";
        getline(cin, desg);
    }

    // Function to display employee details
    void displayEmployeeDetails() const {
        cout << "Employee Code: " << code << endl;
        cout << "Employee Name: " << ename << endl;
        cout << "Employee Designation: " << desg << endl;
    }
};

// Derived class: Manager
class Manager : public Employee {
private:
    int year_of_experience;
    double salary;

public:
    // Function to accept manager details
    void acceptManagerDetails() {
        acceptEmployeeDetails(); // Call base class function to accept employee details
        cout << "Enter Years of Experience: ";
        cin >> year_of_experience;
        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display manager details
    void displayManagerDetails() const {
        displayEmployeeDetails(); // Call base class function to display employee details
        cout << "Years of Experience: " << year_of_experience << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of managers: ";
    cin >> n;

    // Dynamically allocate an array of Manager objects
    Manager* managers = new Manager[n]; //For runtime user input
    // Manager managers[5];  // Compile time if you already know the size
    
    // Accept details for each manager
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Manager " << i + 1 << ":\n";
        managers[i].acceptManagerDetails();
    }

    // Display details for each manager
    cout << "\nManager Details:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nDetails of Manager " << i + 1 << ":\n";
        managers[i].displayManagerDetails();
    }

    // Free dynamically allocated memory
    delete[] managers;

    return 0;
}