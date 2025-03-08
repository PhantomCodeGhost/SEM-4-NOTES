/* Q1.Write a C++ program to overload function Volume and find Volume of Cube, Cylinder and 
Sphere.  */


#include<iostream>
using namespace std;

class Volume{
    public :
    const float PI = 3.1416;

    // Constructor for Cube
    Volume(int side){
        cout<<"Volume of Cube : "<< side * side * side<<endl;
    }

    // Constructor for Cylinder
    Volume(float radius, float height){
        cout<<"Volume of Cylinder : " << PI * radius * radius * height<<endl;
    }

    // Constructor for Sphere
    Volume(double radius){
        cout<<"Volume Of Sphere : "<< (4.0/3.0) * PI * radius * radius * radius <<endl;
    }

};
int main(){
    Volume V1(4);
    Volume V2(5.0,11.0);
    Volume V3(7.0);

}



/* Q2.Write a C++ program with Student as abstract class and create derive classes Engineering, 
Medicine and Science having data member rollno and name from base class Student. Create 
objects of the derived classes and access them using array of pointer of base class Student. */








// ------------------- OR ---------------------------------


/* Q2.Create a class String which contains a character pointer (Use new and delete operator) 
Write a C++ program to overload following operators 
a. ! To reverse the case of each alphabet from given string. 
b. [ ] To print a character present at specified index */