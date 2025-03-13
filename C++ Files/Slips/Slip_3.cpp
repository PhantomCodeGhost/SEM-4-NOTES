/* Q1.Write a C++ program to overload function Volume and find Volume of Cube, Cylinder and 
Sphere.  */


#include<iostream>
using namespace std;

class Volume{
    public :
    const float PI = 3.1416;

    // Constructor for Cube
    Volume(int side){
        cout<<"Volume of Cube : "<< side * side * side<<endl;
    }

    // Constructor for Cylinder
    Volume(float radius, float height){
        cout<<"Volume of Cylinder : " << PI * radius * radius * height<<endl;
    }

    // Constructor for Sphere
    Volume(double radius){
        cout<<"Volume Of Sphere : "<< (4.0/3.0) * PI * radius * radius * radius <<endl;
    }

};
int main(){
    Volume V1(4);
    Volume V2(5.0,11.0);
    Volume V3(7.0);

}



/* Q2.Write a C++ program with Student as abstract class and create derive classes Engineering, 
Medicine and Science having data member rollno and name from base class Student. Create 
objects of the derived classes and access them using array of pointer of base class Student. */

#include <iostream>
using namespace std;

// Abstract base class
class Student {
public:
    // Data members for rollno and name
    int rollno;
    string name;

    // Constructor to initialize rollno and name
    Student(int r, string n) {
        rollno = r;
        name = n;
    }

    // Pure virtual function to be overridden by derived classes
    virtual void display() = 0; // Pure virtual function
};

// Derived class Engineering
class Engineering : public Student {
public:
    // Constructor to initialize base class Student data
    Engineering(int r, string n) : Student(r, n) {}

    // Override the display function to show Engineering student details
    void display() override {
        cout << "Engineering Student - Roll No: " << rollno << ", Name: " << name << endl;
    }
};

// Derived class Medicine
class Medicine : public Student {
public:
    // Constructor to initialize base class Student data
    Medicine(int r, string n) : Student(r, n) {}

    // Override the display function to show Medicine student details
    void display() override {
        cout << "Medicine Student - Roll No: " << rollno << ", Name: " << name << endl;
    }
};

// Derived class Science
class Science : public Student {
public:
    // Constructor to initialize base class Student data
    Science(int r, string n) : Student(r, n) {}

    // Override the display function to show Science student details
    void display() override {
        cout << "Science Student - Roll No: " << rollno << ", Name: " << name << endl;
    }
};

int main() {
    // Array of pointers to the base class Student
    Student* students[3];

    // Create objects of derived classes and assign them to the array
    students[0] = new Engineering(101, "Alice");
    students[1] = new Medicine(102, "Bob");
    students[2] = new Science(103, "Charlie");

    // Access and display information using the array of base class pointers
    for (int i = 0; i < 3; i++) {
        students[i]->display();
    }

    // Clean up the dynamically allocated memory
    for (int i = 0; i < 3; i++) {
        delete students[i];
    }

    return 0;
}





// ------------------- OR ---------------------------------


/* Q2.Create a class String which contains a character pointer (Use new and delete operator) 
Write a C++ program to overload following operators 
a. ! To reverse the case of each alphabet from given string. 
b. [ ] To print a character present at specified index */