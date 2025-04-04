// Q1.Write a C++ program to calculate following series:
// (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... +(1+2+3+4+...+n)

#include <iostream>
using namespace std;

int main() {
    int n, totalSum = 0, innerSum = 0;

    cout << "Enter the value of n: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        innerSum += i;        // Update innerSum to include the current number i
        totalSum += innerSum; // Add innerSum to the totalSum
    }

    cout << "The sum of the series is: " << totalSum << endl;

    return 0;
}



/* Q2.Write a C++ program to read student information such as rollno, name and percentage of n
students. Write the student information using file handling. */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    int rollno;
    string name;
    float percentage;
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    // Dynamically allocate memory for an array of students
    Student* students = new Student[n];

    // Read student information
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Roll No: ";
        cin >> students[i].rollno;
        cin.ignore(); // To ignore the newline character left by cin
        cout << "Name: ";
        getline(cin, students[i].name);
        cout << "Percentage: ";
        cin >> students[i].percentage;
    }

    // Write student information to a file
    ofstream outFile("students.txt");
    if (!outFile) {
        cerr << "Error opening file for writing!\n";
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        outFile << "Student " << i + 1 << ":\n";
        outFile << "Roll No: " << students[i].rollno << "\n";
        outFile << "Name: " << students[i].name << "\n";
        outFile << "Percentage: " << students[i].percentage << "\n\n";
    }

    outFile.close();

    cout << "\nStudent information has been written to 'students.txt'.\n";
    
    // Deallocate memory
    delete[] students;

    return 0;
}