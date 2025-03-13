// Q1 Write the definition for a class Cylinder that contains data members radius and height.
//(10 marks)
#include<iostream>
using namespace std;

class Cylinder{
    private:
    float radius;
    float height;

    public :
    void setRadius(){
       // this->radius = radius;
        cout<<"Enter the radius";
        cin>>radius;

    }
    void setHeight(float height){
        this->height = height;
    }   
    float Volume(){
        return 3.1416 * radius * radius * height;
    }

};

int main(){
        Cylinder c1;
        c1.setRadius();
        c1.setHeight(20.0);
        cout<<"The Volume of Cylinder is : "<<c1.Volume()<<endl;
        return 0;
} 



/* Q2.Write a C++ program to create a class Array that contains one float array as member. Overload 
the Unary ++ and -- operators to increase or decrease the value of each element of an array. Use 
friend function for operator function. */
//(20 marks)

#include<iostream>
using namespace std;

class Array {
    float arr[5];

    public:

    void input(){
        cout<<"Enter array Elements: ";
        for(int i = 0; i<5; i++){
            cin>>arr[i];
        }
    }

    friend void operator++(Array &a){
        cout<<"After Incrementing Elements : "<<endl;
        for(int i = 0; i<5 ; i++){
            a.arr[i]++;
        }
    }

    friend void operator--(Array &a){
        cout<<"After Decrementing Elements : "<<endl;
        for(int i = 0; i<5; i++){
            a.arr[i]--;
        }
    }

    void display(){
        cout<<"Array Elements : ";
        for(int i = 0; i<5; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};

int main(){

    Array A;
    A.input();
    A.display();

    ++A;
    A.display();

    --A;
    A.display();
    return 0;

}
------------------- OR ---------------------------------

/*Q2. Write a C++ program to create a class Shape with functions to find area of the shape and display 
the name of the shape and other essential components of the class. Create derived classes circle, 
rectangle and trapezoid each having overridden function area and display. Write a suitable 
program to illustrate Virtual Function. */
//(20 marks)

#include<iostream>
using namespace std;

class Shape{
    public:
    virtual void area(){

        cout<<"Area of Shape"<<endl;
    }

    virtual void display(){
        cout<<"This is a Shape "<<endl;
    }

};

class Circle : public Shape{

    private :
    float radius;

    public :
    Circle(float radius){
        this->radius = radius;

    }

    void area() override{
        cout<<"Area of Circle : "<< 3.1416 * radius * radius << endl;
    }
    
    void display() override{
        cout<<"This is Circle"<<endl;
    }


};

class Rectangle : public Shape {
    private :
        float length;
        float breadth;
    public :
    Rectangle(float length, float breadth){
        this->length = length;
        this->breadth = breadth;
    }
    void area() override{
        cout<<"Area of Rectangle : "<<length * breadth <<endl;
    }
     void display() override {
        cout<<"This is Rectangle"<<endl;
     }

};
class Trapezoid : public Shape{
    private : 
        float x;
        float y;
        float height;
    public:
    Trapezoid(float x,float y,float height){
        this->x = x;
        this-> y = y;
        this-> height = height;
    }
    void display() override {
        cout<<"This is Trapezoid."<<endl;
    }
    void area() override{
        cout<<"Area Of Trapezoid : "<< 0.5 * (x + y) * height <<endl;
    }

};

int main(){

    Shape *s;

    Circle c(5.0);
    Rectangle r(5.0,10.0);
    Trapezoid t(4.0,5.0,14.0);
    // For Circle
    s = &c;
    s-> display();
    s-> area();

    //For Rectangle
    s = &c;
    s-> display();
    s-> area();

    //for Trapezoid
    s = &t;
    s-> display();
    s-> area();

}


