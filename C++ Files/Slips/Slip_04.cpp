// Q1.Write a C++ program to print area of circle, square and rectangle using inline function. 

#include<iostream>
using namespace std;

inline float circleArea(float r){
    return 3.1416 * r * r;
}

inline int squareArea(int s){
    return s * s;
}

inline int rectangleArea(int length, int breadth){
    return length * breadth;
}

int main(){
    float Circle = circleArea(5);
    int Square = squareArea(5);
    int Rectangle = rectangleArea(10,5);
    cout<<Circle<<endl;
    cout<<Square<<endl;
    cout<<Rectangle<<endl;
    return 0;
}




/* Q2.Create a base class Flight containing protected data members as Flight_no, Flight_Name. Derive
      a class Route(Source, Destination) from class Flight. Also derive a class Reservation (no_seats,
      travel_class, fare, travel_date) from Route. Write a C++ program to perform the following necessary
      functions.
        a. Enter details of n reservations.
        b. Display reservation details of Business class. */

        #include<iostream>
        #include<string>
        using namespace std;
        
        class Flight {
        
            protected :
                int Flight_no;
                string Flight_Name;
        };
        class Route : public Flight{
            protected :
                string Source; 
                string Destination;
        
        };
        
        class Reservation : public Route{
            public :
                int no_seats;
                string travel_class;
                float fare;
                string date;
            
                void inputDetails(){
        
                    cout<<"Enter Flight No : ";
                    cin>>Flight_no;
                    cout<<"Enter Flight Name : ";
                    cin.ignore();
                    getline(cin, Flight_Name);
                    cout<<"Enter the Source : ";
                    getline(cin, Source);
                    cout<<"Enter the Destination : ";
                    getline(cin, Destination);
                    cout<<"Enter no of seats : ";
                    cin>>no_seats;
                    cin.ignore();
                    cout<<"Enter Class (Business/Economy) : ";
                    getline(cin, travel_class);
                    cout<<"Enter fare : ";
                    cin>>fare;
                    cin.ignore();
                    cout<<"Enter Date (DD/MM/YY) : "<<endl;
                    getline(cin, date); 
                }
        
                void displayDetails(){
                    cout<<"Flight No : "<<Flight_no<<endl;
                    cout<<"Flight Name : "<<Flight_Name<<endl;
                    cout<<"Source : "<<Source<<endl;
                    cout<<"Destination : "<<Destination<<endl;
                    cout<<"Enter no of Seats : "<<no_seats<<endl;
                    cout<<"Travel Class : "<<travel_class<<endl;
                    cout<<"Fare : "<<fare<<endl;
                    cout<<"Date : "<<date<<endl;
        
        
                }
                bool isBusinessClass() const {
                    return travel_class == "Business";
                }
        
        };
        int main(){
            int n;
            cout<<"Enter Number of reservations : ";
            cin>>n;
        
            Reservation reservations[n];
        
            for(int i = 0; i<n ;i++){
                cout<<"Enter reservation Details : "<<i + 1 <<" : "<<endl;
                reservations[i].inputDetails();
            }
        
            cout<<"Reservations Details for Business Class : ";
            for(int i = 0 ; i<n; i++){
                if(reservations[i].isBusinessClass()){
                    reservations[i].displayDetails();
                    cout<<"------------------------"<<endl;
                }
            }
            return 0;
        }




// ------------------- OR ---------------------------------

// Q2.Write a C++ program to create a class which contains two dimensional integer array of size m*n
// Write a member function to display transpose of entered matrix.(Use Dynamic Constructor for
// allocating memory and Destructor to free memory of an object)

#include<iostream>
using namespace std;

class Matrix{
    private :
        int **arr;
        int m, n;
    public:
        Matrix(int rows , int cols) : m(rows),n(cols){
            arr = new int*[m];
            for(int i = 0; i < m; i++){
                arr[i] = new int[n];
            }
        }
        ~Matrix() {
            for (int i =0; i< m; i++){
                delete[] arr[i];
            }
            delete[] arr;
        }
        void inputMatrix(){
            cout<<"Enter Matrix Elements : ";
            for(int i =0 ; i<m; i++){
                for(int j = 0; j<n; j++){
                    cin>>arr[i][j];
                }
            }
        }

        void display(){
            cout<<"Matrix Created : "<<endl;
            for(int i = 0; i < m; i++){
                for(int j = 0; j < n; j++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        void Transpose(){
            cout<<"Transpose Matrix : "<<endl;
            for(int j = 0; j < n; j++){
                for(int i =0; i<m; i++){
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
        }

};
int main(){
    int m , n;
    cout<<"Enter no of rows and column : ";
    cin>>m>>n;

    Matrix m1(m,n);

    m1.inputMatrix();
    m1.display();
    m1.Transpose();

}


