// Q1. Write a C++ program to interchange values of two integer numbers (use call by reference).

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}


// Q2. Write a C++ program to define a class Bus with the following specifications: Bus No, Bus
// Name, No of Seats, Starting point, Destination .Write a menu driven program by using
// appropriate manipulators to
// a. Accept details of n buses.
// b. Display all bus details.
// c. Display details of bus from specified starting point to destination


#include<iostream>
#include<iomanip>
using namespace std;

class Bus{
    int Bus_No;
    string Bus_Name;
    int seats;
    string startPoint;
    string destination;
    
    public :
        void getBusInfo(){
            cout<<"Enter Bus_No : ";
            cin>>Bus_No;
            cout<<"Bus Name: ";
            cin.ignore();
            getline(cin, Bus_Name);
            cout<<"Enter startPoint : ";
            getline(cin, startPoint);
            cout<<"Enter destination : ";
            getline(cin, destination);
            cout<<"Enter no of Seats ";
            cin>>seats;
        }
        void displayBusInfo()const {
            cout << left << setw(10) << Bus_No
            << setw(20) << Bus_Name
            << setw(10) << seats
            << setw(10) << startPoint
            << setw(10) << destination << endl;
        }
        string getStart(){
            return startPoint;
        }  

        string getEnd(){
            return destination;
        }
    };
int main(){
    Bus * buses = nullptr;
    int n = 0, choice;
    string start; 
    string end;
    do{
        cout << "\nMenu:\n1. Aceept details of n Buses\n2. Display Details of All Buses\n3.Specific Bus Details\n4.Exit\nEnter your Choice (1 - 3) :";
        cin>>choice;


        switch (choice) {

        case 1:
            cout<<"Enter no of Buses : ";
            cin>>n;
            buses = new Bus[n];
            for(int i = 0; i<n; i++){
                buses[i].getBusInfo();
            }
        break;
        case 2:

            cout<<"\n===================== All Bus Details =========================\n";
            cout << left << setw(10) << "Bus No"
            << setw(20) << "Bus Name"
            << setw(10) << "Seats"  
            << setw(10) << "Start Point"
            << setw(10) << "Destination" <<endl;
            cout << "=============================================================\n";

            for(int i = 0; i< n; i++){

                buses[i].displayBusInfo();
            }
        break;
        case 3:
            cin.ignore();   
            cout<<"Enter Start : ";
            getline(cin,start);
            cout<<"Enter Destination : ";
            getline(cin,end);

            for(int i = 0; i<n; i++){
                
                if(buses[i].getStart() == start && buses[i].getEnd() == end){
                    buses[i].displayBusInfo();
                }
            }
        break;
        case 4:
            cout << "Exiting...";
            break;
        default :
            cout<<"Enter valid Choice ( 1 - 4) : ";
            cin>>choice;
        }
    }while(choice != 4);

    return 0;
}