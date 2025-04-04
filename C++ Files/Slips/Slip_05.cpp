/* Q1.Write a C++ program to create a class Mobile which contains data members as Mobile_Id,
Mobile_Name, Mobile_Price. Create and Initialize all values of Mobile object by using
parameterized constructor. Display the values of Mobile object. 
*/

#include<iostream>
#include<string>
using namespace std;

class Mobile{
    private :
        int Mobile_Id;
        string Mobile_Name;
        float Mobile_Price;
    
    public :
        Mobile(int id, string name, float price){
        
        Mobile_Id = id;
        Mobile_Name = name;
        Mobile_Price = price;
    }
    void display() {
        cout << "Mobile ID: " << Mobile_Id << endl;
        cout << "Mobile Name: " << Mobile_Name << endl;
        cout << "Mobile Price: " << Mobile_Price << endl;
    }
    
};
int main(){
    
    Mobile m1(101,"Asus",10.55);
    m1.display();
}



/* Q2.Create a base class Student (Roll_No, Name) which derives two classes Theory and Practical.
Theory class contains marks of five Subjects and Practical class contains marks of two practical
subjects. Class Result (Total_Marks, Class) inherits both Theory and Practical classes. (Use
concept of Virtual Base Class) Write a menu driven program to perform the following functions:
a. Build a master table.
b. Display master table. */

#include <iostream>
#include <string>
using namespace std;

// Base Class
class Student {
protected:
    int Roll_No;
    string Name;
public:
    void getStudentData() {
        cout << "Enter Roll No: ";
        cin >> Roll_No;
        cin.ignore();
        cout << "Enter Name: ";
        getline(cin, Name);
    }

    void displayStudentData() {
        cout << "Roll No: " << Roll_No << "\nName: " << Name << endl;
    }
};

// Theory Class (Virtual Inheritance)
class Theory : virtual public Student {
protected:
    int theoryMarks[5];
public:
    void getMarks() {
        cout << "Enter theory marks for 5 subjects: ";
        for (int &mark : theoryMarks) {
            cin >> mark;
        }
    }

    int getTotalMarks() {
        int total = 0;
        for (int mark : theoryMarks) {
            total += mark;
        }
        return total;
    }
};

// Practical Class (Virtual Inheritance)
class Practical : virtual public Student {
protected:
    int practicalMarks[2];
public:
    void getMarks() {
        cout << "Enter marks for 2 practicals: ";
        for (int &mark : practicalMarks) {
            cin >> mark;
        }
    }

    int getTotalMarks() {
        return practicalMarks[0] + practicalMarks[1];
    }
};

// Result Class
class Result : public Theory, public Practical {
    int Total_Marks = 0;
    string Class;
public:
    void getStudentResult() {
        getStudentData();
        Theory::getMarks();
        Practical::getMarks();
        Total_Marks = Theory::getTotalMarks() + Practical::getTotalMarks();

        if (Total_Marks >= 400)
            Class = "First Class";
        else if (Total_Marks >= 300)
            Class = "Second Class";
        else if (Total_Marks >= 200)
            Class = "Pass Class";
        else
            Class = "Fail";
    }

    void displayStudentResult() {
        cout << "-------------------\n";
        displayStudentData();
        cout << "Total Marks: " << Total_Marks << "\nClass: " << Class << endl;
    }
};

// Main Function
int main() {
    int choice, n ;
    Result students[10];

    do {
        cout << "\nMenu:\n1. Build a master table\n2. Display master table\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter number of Students: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "\nEnter details for Student " << i + 1 << ":\n";
                    students[i].getStudentResult();
                }
                break;

            case 2:
                    cout << "\nMaster Table:\n";
                    for (int i = 0; i < n; i++) {
                        cout << "\nStudent " << i + 1 << ":\n";
                        students[i].displayStudentResult();
                    }
                break;

            case 3:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid Choice! Try again.\n";
        }
    } while (choice != 3);

    return 0;
}




    