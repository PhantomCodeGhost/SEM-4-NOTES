// Q1.Write a C++ program to create a class employee containing salary as a data member. Write
// necessary member functions to overload the operator unary pre and post decrement "--"
// for decrementing salary. 
#include <iostream>
using namespace std;

class Employee {
private:
    int salary;

public:
    // Constructor to initialize salary
    Employee(int s) : salary(s) {}

    // Getter function to access salary
    int getSalary() const {
        return salary;
    }

    // Overloading the pre-decrement operator
    Employee& operator--() {
        --salary;
        return *this;
    }

    // Overloading the post-decrement operator
    Employee operator--(int) {
        Employee temp = *this;
        --salary;
        return temp;
    }
};

int main() {
    Employee emp(5000);

    cout << "Initial Salary: " << emp.getSalary() << endl;

    // Using pre-decrement operator
    --emp;
    cout << "After pre-decrement, Salary: " << emp.getSalary() << endl;

    // Using post-decrement operator
    emp--;
    cout << "After post-decrement, Salary: " << emp.getSalary() << endl;

    return 0;
}





// Q2. Design a base class Product(Product _Id, Product _Name, Price). Derive a class Discount
// (Discount_In_Percentage) from Product. A customer buys n Products. Calculate total price,
// total discount and display bill using appropriate manipulators.

#include <iostream>
#include <iomanip>
using namespace std;

class Product {
protected:
    int Product_Id;
    string Product_Name;
    float Price;

public:
    void inputProductDetails() {
        cout << "Product ID: ";
        cin >> Product_Id;
        cout << "Product Name: ";
        cin >> ws;
        getline(cin, Product_Name);
        cout << "Price: ";
        cin >> Price;
    }

    float getPrice() { // ✅ Getter function
        return Price;
    }
};

class Discount : public Product {
private:
    float Discount_In_Percentage;

public:
    void inputDiscountDetails() {
        inputProductDetails();
        cout << "Discount (%): ";
        cin >> Discount_In_Percentage;
    }

    float getDiscountAmount() {
        return getPrice() * (Discount_In_Percentage / 100);
    }

    float getFinalPrice() {
        return getPrice() - getDiscountAmount();
    }

    void displayProduct() {
        cout << left << setw(5) << Product_Id
             << setw(20) << Product_Name
             << setw(10) << fixed << setprecision(2) << getPrice()
             << setw(10) << Discount_In_Percentage << "%"
             << setw(10) << getDiscountAmount()
             << setw(10) << getFinalPrice() << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of products: ";
    cin >> n;

    Discount *products = new Discount[n];
    float totalPrice = 0, totalDiscount = 0;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for product " << i + 1 << ":\n";
        products[i].inputDiscountDetails();
        totalPrice += products[i].getPrice();  // ✅ Fixed access issue
        totalDiscount += products[i].getDiscountAmount();
    }
                                            
    cout << "\n============================= BILL =============================\n";
    cout << left << setw(5) << "ID"
         << setw(20) << "Product Name"
         << setw(10) << "Price"
         << setw(10) << "Discount"
         << setw(10) << "Disc Amt"
         << setw(10) << "Final Price" << endl;
    cout << "===================================================================\n";

    for (int i = 0; i < n; i++) {
        products[i].displayProduct();
    }

    cout << "\n-------------------------------------------------------------------\n";
    cout << left << setw(25) << "Total"
         << setw(10) << fixed << setprecision(2) << totalPrice
         << setw(10) << " "
         << setw(10) << totalDiscount
         << setw(10) << totalPrice - totalDiscount << endl;
    cout << "-------------------------------------------------------------------\n";

    delete[] products;

    return 0;
}
