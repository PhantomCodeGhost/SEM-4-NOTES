// Q1.Write a C++ program to sort integer and float array elements in ascending order by using
// function overloading

#include <iostream>
using namespace std;

// Function to sort an integer array
void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j]) swap(arr[i], arr[j]);
}

// Function to sort a float array
void sortArray(float arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j]) swap(arr[i], arr[j]);
}

// Function to take input for an array
template <typename T>
void inputArray(T arr[], int n) {
    for (int i = 0; i < n; i++) cin >> arr[i];
}

// Function to display an array
template <typename T>
void displayArray(T arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;

    // Sorting Integer Array
    cout << "Enter number of integers: ";
    cin >> n;
    int intArr[n];

    cout << "Enter integers: ";
    inputArray(intArr, n);
    sortArray(intArr, n);

    cout << "Sorted Integers: ";
    displayArray(intArr, n);

    // Sorting Float Array
    cout << "\nEnter number of floats: ";
    cin >> n;
    float floatArr[n];

    cout << "Enter floats: ";
    inputArray(floatArr, n);
    sortArray(floatArr, n);

    cout << "Sorted Floats: ";
    displayArray(floatArr, n);

    return 0;
}



// Q2. Write a C++ program to create a class Department which contains data members as
// Dept_Id, Dept_Name, H.O.D., Number_Of_staff. Write necessary member functions to
// a. Accept details from user for ‘n’ departments and write it in a file “Dept.txt”.
// b. Display details of department from a file. 

#include <iostream>
#include <fstream>
using namespace std;

class Department {
public:
    int deptId;
    string deptName, hod;
    int numOfStaff;

    void acceptDetails() {
        cout << "Enter Department ID: ";
        cin >> deptId;
        cin.ignore(); 
        cout << "Enter Department Name: ";
        getline(cin, deptName);
        cout << "Enter H.O.D. Name: ";
        getline(cin, hod);
        cout << "Enter Number of Staff: ";
        cin >> numOfStaff;
    }

    void writeToFile(ofstream &file) {
        file << deptId << "\n" << deptName << "\n" << hod << "\n" << numOfStaff << "\n";
    }
};

int main() {
    int choice;
    
    do {
        cout << "\n1. Accept department details & save to file"
             << "\n2. Display department details from file"
             << "\n3. Exit"
             << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int n;
                cout << "Enter number of departments: ";
                cin >> n;
                ofstream file("Dept.txt");

                for (int i = 0; i < n; i++) {
                    Department dept;
                    cout << "Enter details for Department " << i + 1 << ":\n";
                    dept.acceptDetails();
                    dept.writeToFile(file);
                }
                file.close();
                cout << "Details saved to file successfully.\n";
                break;
            }

            case 2: {
                ifstream file("Dept.txt");

                if (!file) {
                    cout << "File not found!\n";
                } else {
                    cout << "\nDepartment Details from File:\n";
                    int deptId, numOfStaff;
                    string deptName, hod;

                    while (file >> deptId) { 
                        file.ignore();
                        getline(file, deptName);
                        getline(file, hod);
                        file >> numOfStaff;
                        cout << "Department ID: " << deptId 
                             << ", Name: " << deptName 
                             << ", H.O.D.: " << hod 
                             << ", Staff: " << numOfStaff << endl;
                    }
                    file.close();
                }
                break;
            }

            case 3:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
