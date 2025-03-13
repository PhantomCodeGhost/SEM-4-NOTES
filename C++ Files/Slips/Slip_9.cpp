
/* Q1. Write a C++ program to create a class Item with data members Item_code, Item_name, Item_Price.
Write member functions to accept and display item information and also display number of objects
created for a class. (Use Static data member and Static member function) */



#include<iostream>
#include<string>
using namespace std;

class Item{
    public :
        static int Item_code;
        static string Item_name;
        static float Item_Price;
    static void getinfo(){
        cout<<"Enter Item_code : ";
        cin>>Item_code;
        cout<<"Enter Item Name : ";
        cin>>Item_name;
        cout<<"Enter Item_Price : ";
        cin>>Item_Price;
    }        
    static void display(){
        cout<<"\nItem Code : "<<Item_code<<endl;
        cout<<"Item Name : "<<Item_name<<endl;
        cout<<"Item Price: "<<Item_Price<<endl;
    }
};
int Item::Item_code = 0;
string Item::Item_name = "";
float Item::Item_Price = 0;


int main(){
    Item::getinfo();
    Item::display();
    return 0;
}


-----------------------------

/*
Q2. Create a Base class Train containing protected data members as Train_no, Train_Name. Derive a
class Route(Route_id, Source, Destination) from Train class. Also derive a class Reservation
(Number_of_Seats, Train_Class, Fare, Travel_Date) from Route. Write a C++ program
to perform following necessary functions:
a. Enter details of n reservations
b. Display details of all reservations
c. Display reservation details of a specified Train class */


#include<iostream>
#include<string>
using namespace std;

class Train{
    protected :
        int Train_no;
        string Train_Name;
    
};
class Route : public Train{
    protected :
        int Route_Id;
        string Source;
        string Destination;
};
class Reservation: public Route{
    public : 
        int Number_of_Seats;
        string Train_Class;
        float Fare;
        string Travel_Date;
        
    void inputDetails(){
        
        cout<<"Enter Train No : ";
        cin>>Train_no;
        cout<<"Enter Train Name :";
        cin.ignore();
        getline(cin, Train_Name);
        cout<<"Enter Route Id : ";
        cin>>Route_Id;
        cin.ignore();
        cout<<"Enter Source : ";
        getline(cin, Source);
        cout<<"Enter Destination : ";
        getline(cin, Destination);
        cout<<"Enter no of Seats : ";
        cin>>Number_of_Seats;
        cin.ignore();
        cout<<"Enter train Class : ";
        getline(cin, Train_Class);
        cout<<"Enter train Fare : ";
        cin>>Fare;
        cin.ignore();
        cout<<"Enter Travel Date (dd/mm/yy) : ";
        getline(cin, Travel_Date);
    }
        void displayDetails(){
            cout<<"Train No : "<<Train_no<<endl;
            cout<<"Train Name : "<<Train_Name<<endl;
            cout<<"Route Id : "<<Route_Id<<endl;
            cout<<"Source : "<<Source<<endl;
            cout<<"Destination : "<<Destination<<endl;
            cout<<"Number of Seats : "<<Number_of_Seats<<endl;
            cout<<"Train Class : "<<Train_Class<<endl;
            cout<<"Travel Date : "<<Travel_Date<<endl;
            
            
        }
        
    bool isClassFound(const string& className) const {
        return Train_Class == className;
    }
};
int main(){
    int n;
    cout<<"Enter number of Reservations : ";
    cin>>n;
    
    Reservation reservations[n];
    for (int i = 0; i<n; i++){
        cout<<"Enter details for reservation "<<i+1<<" : "<<endl;
        reservations[i].inputDetails();
        
    }
    cout<<"\nAll Reservations : "<<endl;
    for(int i = 0; i < n; i++){
        reservations[i].displayDetails();
        cout<<"----------------------"<<endl;
    }
    cout << "Enter the class to search for (Economy or Business): ";
    string classToSearch;
    cin >> classToSearch;

    cout << "Reservations Details for " << classToSearch << " Class: " << endl;
    bool found = false;
    for (int i = 0; i < n; i++){
        if (reservations[i].isClassFound(classToSearch)){
            reservations[i].displayDetails();
            cout << "---------------------" << endl;
            found = true;
        }
    }
    
    return 0;
    
}



