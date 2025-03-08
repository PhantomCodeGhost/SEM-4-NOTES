// Q1.Write a C++ program to create two classes Rectangle1 and Rectangle2. Compare area of both the 
// rectangles using friend function. 


#include<iostream>
using namespace std;
class Rectangle2;
class Rectangle1{
    
    private : 
    float length;
    float breadth;
    
    public :
    Rectangle1(float l, float b) : length(l), breadth(b) {}
    
        float Area(){
            return length * breadth;
        }
    friend void Compare(Rectangle1, Rectangle2);

};
class Rectangle2{

    private:
        float length;
        float breadth;
    public :
            Rectangle2(float l, float b) : length(l), breadth(b) {}    

        float Area(){
            return length * breadth;
        }
        friend void Compare(Rectangle1, Rectangle2);
};

void Compare(Rectangle1 r1, Rectangle2 r2){
    if(r1.Area() > r2.Area()){
        cout<< "Rectangle  1 has larger Area "<<endl;
    }else if(r1.Area() < r2.Area()){
        cout<<"Rectangle 2 has larger Area "<<endl;
    }else{
        cout <<"Both the Rectangles have equal Area"<<endl;
    }
}


int main(){

    float l1, b1, l2, b2;

    cout<<"Enter the length 1 : ";
    cin>>l1;
    cout<<"Enter the breadth 1 : ";
    cin>>b1;

    cout<<"Enter the length 2 : ";
    cin>>l2;
    cout<<"Enter the breadth 2 : ";
    cin>>b2;
    
    Rectangle1 R1(l1,b1);
    Rectangle2 R2(l2,b2);

    Compare(R1,R2);

    return 0;

}


/* Q2. A book (ISBN) and CD (data capacity) are both types of media (id, title) objects. A person buys 
10 media items each of which can be either book or CD. Display the list of all books and CD’s 
bought. Define the classes and appropriate member functions to accept and display data. Use 
pointers and concept of polymorphism (Virtual Function) */



------------------- OR ---------------------------------

// Q2.Write a C++ program to copy the contents of one file to another
#include<iostream>
#include<fstream>
// Make Two File Source(Add Some text) and Destination(Keep it Blank)
using namespace std;
int main(){

    string sourceFile;
    string destinationFile;

    cout<<"Enter Your Source File Name : ";
    cin>>sourceFile;

    cout<<"Enter Your Destination File Name : ";
    cin>>destinationFile;

    ifstream src(sourceFile, ios::binary);

    ofstream dest(destinationFile, ios::binary);

    if(!src || !dest){
        cout<<"Error opening File!";
        return 1;
    }
    
    dest << src.rdbuf();
    cout <<"File copied successfully!!"<<endl;
    return 0;

}
