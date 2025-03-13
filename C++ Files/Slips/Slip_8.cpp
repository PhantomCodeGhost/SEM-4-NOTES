/* Q1.Write a C++ program to subtract two integer numbers of two different classes using friend
function. */

#include<iostream>
using namespace std;

class B;  // Forward declaration of class B

class A{
private:
    int num1;
    
public:
    A(){
        cout << "Enter a number 1: ";
        cin >> num1;
    }
    
    // Declare subtract() as a friend function
    friend int subtract(A, B);
};

class B{
private:
    int num2;
    
public:
    B(){
        cout << "Enter a number 2: ";
        cin >> num2;
    }
    
    // Declare subtract() as a friend function
    friend int subtract(A, B);
};

// Friend function definition
int subtract(A a, B b){
    return a.num1 - b.num2;  // Perform the subtraction using private members
}

int main(){
    A a1;  // Create an object of class A
    B b1;  // Create an object of class B
    
    // Call subtract and store the result
    int result = subtract(a1, b1);
    
    // Output the result
    cout << "After Subtraction: " << result << endl;
    
    return 0;
}

------------
// Write a C++ program to create a class Date which contains three data members as dd,mm,yyyy.
// Create and initialize the object by using parameterized constructor and display date in dd-monthyyyy format. (Input: 19-12-2014 Output: 19-Dec-2014) Perform validation for month
#include<iostream>
#include<string>
using namespace std;
class Date{
    private :
        int dd;
        int mm;
        int yy;
    public:
        Date(){
            cout<<"Enter Day : ";
            cin>>dd;
            cout<<"Enter Month : ";
            cin>>mm;
            cout<<"Enter Year : ";
            cin>>yy;
            
            if(mm >=1 && mm <=12){
                cout<<"Month is Valid!!!"<<endl;
            }else{
                cout<<"Enter valid month between(1-12) : ";
                cin>>mm;
            }
        }
    void display(){
        string months[] = {"January","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};
        cout<<dd<<"-"<<months[mm-1]<<"-"<<yy<<endl;
    }
};
int main(){
    Date D;
    D.display();
    return 0;
}
