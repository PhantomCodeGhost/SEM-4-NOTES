// Q1.Write a C++ program to implement a class printdata to overload print function as follows:
// void print(int) - outputs value followed by the value of the integer.
// Eg. print(10) outputs - value 10
// void print(char *) – outputs value followed by the string in double quotes.
// Eg. print(“hi”) outputs value “hi” 

#include<iostream>
#include<string>
using namespace std;

class printdata {
    public:
        // Overload print function for integer
        void print(int i) {
            cout << "Value " << i << endl;
        }
        
        // Overload print function for string (char pointer)
        void print(const char* str) {
            cout << "Value \"" << str << "\"" << endl;
        }
};

int main() {
    printdata p1;
    
    // Testing the print function with an integer
    p1.print(10); // Expected output: Value 10
    
    // Testing the print function with a string
    p1.print("Hi"); // Expected output: Value "Hi"
    
    return 0;
}


---------------
// Q2. Design two base classes Employee (Name, Designation) and Project (Project_Id, title). Derive
// a class Emp_Proj(Duration) from Employee and Project. Write a menu driven program to
// a. Build a master table. Display a master table
// b. Display Project details in the ascending order of duration

// SAME CODE FOR SLIP LAST QUESTION 


#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Employee{
    private:
        string Name;
        string Designation;
    public :
        void getEmpData(){
            cout<<"Enter Name : ";
            cin>>Name;
            cin.ignore();
            cout<<"Enter Designation: ";
            getline(cin, Designation);
        }
       void displayEmpData(){
            cout<<"Name : "<<Name<<endl;
            cout<<"Designation : "<<Designation<<endl;
        }
    
};
class Project{
    private :
        int Project_Id;
        string title;
    public :
        void getProjData(){
            cout<<"Enter Project Id : ";
            cin>> Project_Id;
            cin.ignore();
            cout<<"Enter Title : ";
            getline(cin, title);
        }
        void displayProjData(){
            cout<<"Project Id : "<<Project_Id<<endl;
            cout<<"Title : "<<title<<endl;
        }
    
};
class Emp_Proj : public Employee, public Project{
    private :
        int Duration;
    public:
        void getEmp_Proj(){
            getEmpData();
            getProjData();
            cout<<"Enter Duration : ";
            cin>>Duration;
        }
        void displayEmp_Proj(){
            displayEmpData();
            displayProjData();
            cout<<"Duration : "<<Duration<<endl;
            cout<<"------------------------"<<endl;
        }
        int getDuration() const { return Duration; }
    
};
int main(){
        int choice, n;
        Emp_Proj ep[n];
        do{
            cout<<"\nMenu :\n1. Build Master Table\n2. Display Details in Ascending(Duraion)\n3. Exiting...\n4. Enter your choice : ";
            cin>>choice;
            
            switch (choice)
            {
                case 1:
                    cout<<"Enter No. of Projects : ";
                    cin>>n;
                    for(int i= 0; i<n; i++){
                        cout<<"Enter detail of Employee "<<i+1<<" : "<<endl;
                        ep[i].getEmp_Proj();
                    }
                break;
                case 2:
                    cout<<"\nMaster Table : ";
                    sort(ep, ep + n, [](const Emp_Proj &a, const Emp_Proj &b) {
                        return a.getDuration() < b.getDuration();
                    });
                    for(int i= 0; i<n; i++){
                        cout<<"Employee "<< i+1<<" : "<<endl;
                        ep[i].displayEmp_Proj();
                    }
                break;
                case 3:
                    cout<<"Exiting .....";
                    exit(0);
                    break;
                default:
                    cout<<"Invalid!! Choice , Try Agian\n";
            }
        } while (choice !=3);
        return 0;
    
    
}
