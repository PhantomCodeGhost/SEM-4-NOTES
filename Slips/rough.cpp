
/* Q2.Write a C++ program with Student as abstract class and create derive classes Engineering, 
Medicine and Science having data member rollno and name from base class Student. Create 
objects of the derived classes and access them using array of pointer of base class Student. */


#include<iostream>
using namespace std;
class Student{
    public :
    int rollNo;
    string name;

    Student(int r, string n) : rollNo(r), name(n){}

    virtual void display() = 0;
};

class Engineering : public Student{

    public :
        Engineering(int r , string n) : Student(r, n) {}

    void display() override {
        cout<<"Engineering Student - Roll No : "<<rollNo<<", Name : "<<name<<endl;
    }
};

class Medicine : public Student{
    public :
        Medicine(int r, string n) :  Student(r, n) {}

    void display() override{
        cout<<"Medicine Student - Roll No : "<<rollNo<<", Name : "<<name<<endl;
    }

};

class Science : public Student {
        public :
        Science(int r, string n) : Student(r, n) {}

        void display() override{
            cout<<"Science Student - Roll No : "<<rollNo<<", Name : "<<name<<endl;
        }

};
int main() {

    Student * student[3];


    student[0] = new Engineering(10,"Ankush");
    student[1] = new Medicine(7,"Vedant");
    student[2] = new Science(15,"Sanket");

    for (int i = 0; i<3; i++){
        student[i]->display();
    }
    for (int i = 0; i<3; i++){
        delete student[i];
    }
    return 0;
}




