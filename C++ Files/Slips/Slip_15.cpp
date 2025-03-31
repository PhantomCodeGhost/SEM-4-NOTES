// Q1.Write a C++ program to check minimum and maximum of two integer number 
// (use inline function and conditional operator)

#include<iostream>
using namespace std;

inline int max(int x,int y){
    return (x > y) ? x : y;
}
int main(){
    int a =10, b= 20;

    cout<<"Maximum of "<<a<<" and "<<b<<" is : "<<max(a,b);

    return 0;
}


// Q2.Create a base class Conversion. Derive three different classes Weight (Gram, Kilogram), Volume
// (Milliliter, Liter), Currency (Rupees, Paise) from Conversion class. Write a program to perform
// read, convert and display operations. (Use Pure virtual function)
#include<iostream>
using namespace std;

class Conversion{

    public :
        virtual void read() = 0;
        virtual void convert() = 0;
        virtual void display() = 0;

};
class Weight : public Conversion{
    private :
        float Gram;
        float Kilogram;
    public :
        void read() override {
            cout<<"Enter Weight in Grams : ";
            cin>>Gram;
        }

        void convert() override {
            Kilogram = Gram / 1000.0f;
        }

        void display() override {
            cout<<"Weight in Kilograms : "<<Kilogram<<endl;
        }
};
class Volume : public Conversion{
    private :
        float Milliliter;
        float Liter;

    public :
        void read() override {
            cout<<"Enter Volume in Liter : ";
            cin>>Liter;
        }
        void convert() override {
            Milliliter = Liter * 1000.0f;
        }

        void display() override {
            cout<<"Volume in Milliliter : "<<Milliliter<<endl;
        }
};

class Currency : public Conversion{

    private :
        float Paisa;
        float Rupees;
    public :
        void read() override {
            cout<<"Enter Currency in Paisa : ";
            cin>>Paisa;
        }

        void convert() override {
            Rupees = Paisa / 100.0f;
        }

        void display() override {
            cout<<"Currency in Rupees : "<<Rupees<<endl;
        }
};

int main(){

        Weight w1;
        Volume v1;
        Currency c1;

        cout<<" ==== Weight Conversion ==== "<<endl;
        w1.read();
        w1.convert();
        w1.display();

        cout<<" ==== Volume Conversion ==== "<<endl;
        v1.read();
        v1.convert();
        v1.display();

        cout<<" ==== Currency Conversion ==== "<<endl;
        c1.read();
        c1.convert();
        c1.display();

        return 0;
}