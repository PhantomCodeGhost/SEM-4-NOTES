// Q1.Write a C++ program to read two float numbers. Perform arithmetic binary operations +,-,*,/ on
// these numbers using inline function. Display the resultant value. 

#include<iostream>
using namespace std;

inline float add(float a, float b){
    return a + b ;
}
inline float sub(float a, float b){
    return a - b ;
}
inline float mul(float a, float b){
    return a * b ;
}
inline float Div(float a, float b){
    return a / b ;
}

int main(){
    float x, y;
    cout<<"Enter value of x  & y : ";
    cin>>x>>y;
    
    cout<<"x + y = "<<add(x,y)<<endl;
    cout<<"x - y = "<<sub(x,y)<<endl;
    cout<<"x * y = "<<mul(x,y)<<endl;
    cout<<"x / y = "<<Div(x,y)<<endl;
}



// Q2. Create a base class Conversion. Derive three different classes Weight (Gram, Kilogram),
// Volume (Milliliter, Liter), Currency (Rupees, Paise) from Conversion class. Write a program
// to perform read, convert and display operations. (Use Pure virtual function)

#include<iostream>
using namespace std;

// Base Class
class Conversion {
public:
    virtual void read() = 0;  // Pure virtual function for reading input
    virtual void convert() = 0;  // Pure virtual function for conversion
    virtual void display() = 0;  // Pure virtual function for displaying output
};

// Derived Class for Weight Conversion
class Weight : public Conversion {
private:
    float grams;
    float kilograms;
public:
    void read() override {
        cout << "Enter weight in grams: ";
        cin >> grams;
    }

    void convert() override {
        kilograms = grams / 1000.0f;
    }

    void display() override {
        cout << "Weight in grams: " << grams << " g" << endl;
        cout << "Weight in kilograms: " << kilograms << " kg" << endl;
    }
};

// Derived Class for Volume Conversion
class Volume : public Conversion {
private:
    float milliliters;
    float liters;
public:
    void read() override {
        cout << "Enter volume in milliliters: ";
        cin >> milliliters;
    }

    void convert() override {
        liters = milliliters / 1000.0f;
    }

    void display() override {
        cout << "Volume in milliliters: " << milliliters << " ml" << endl;
        cout << "Volume in liters: " << liters << " L" << endl;
    }
};

// Derived Class for Currency Conversion
class Currency : public Conversion {
private:
    float rupees;
    float paise;
public:
    void read() override {
        cout << "Enter currency in rupees: ";
        cin >> rupees;
    }

    void convert() override {
        paise = rupees * 100.0f;
    }

    void display() override {
        cout << "Currency in rupees: " << rupees << " Rs" << endl;
        cout << "Currency in paise: " << paise << " paise" << endl;
    }
};

int main() {
    // Create objects of derived classes
    Weight weight;
    Volume volume;
    Currency currency;

    // Perform operations for Weight
    cout << "Weight Conversion:" << endl;
    weight.read();
    weight.convert();
    weight.display();

    // Perform operations for Volume
    cout << "\nVolume Conversion:" << endl;
    volume.read();
    volume.convert();
    volume.display();

    // Perform operations for Currency
    cout << "\nCurrency Conversion:" << endl;
    currency.read();
    currency.convert();
    currency.display();

    return 0;
}