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
using namespace std;

// Base class: Product
class Product {
protected:
    int Product_Id;
    string Product_Name;
    float Price;

public:
    // Constructor to initialize product details
    Product(int id, string name, float price) {
        Product_Id = id;
        Product_Name = name;
        Price = price;
    }

};

// Derived class: Discount
class Discount : public Product {
private:
    float Discount_In_Percentage;

public:
    // Constructor to initialize product and discount details
    Discount(int id, string name, float price, float discount) : Product(id, name, price) {
        Discount_In_Percentage = discount;
    }

    // Function to get the discount amount
    float getDiscountAmount() {
        return Price * (Discount_In_Percentage / 100);
    }

    // Function to display product details with discount
    void displayProduct() {
        cout << "ID: " << Product_Id << ", Name: " << Product_Name << ", Price: " << Price << ", Discount: " << getDiscountAmount() << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of products: ";
    cin >> n;

    float totalPrice = 0, totalDiscount = 0;

    // Input product details and calculate totals
    for (int i = 0; i < n; i++) {
        int id;
        string name;
        float price, discount;

        cout << "\nEnter details for product " << i + 1 << ":\n";
        cout << "Product ID: ";
        cin >> id;
        cout << "Product Name: ";
        cin >> ws; // To handle any leftover newline character
        getline(cin, name);
        cout << "Price: ";
        cin >> price;
        cout << "Discount (%): ";
        cin >> discount;

        // Create a Discount object
        Discount product(id, name, price, discount);

        // Display product details with discount
        product.displayProduct();

        // Update total price and total discount
        totalPrice += price;
        totalDiscount += product.getDiscountAmount();
    }

    // Display the total price, total discount, and final price
    cout << "\n------------------- Bill -------------------\n";
    cout << "Total Price: " << totalPrice << endl;
    cout << "Total Discount: " << totalDiscount << endl;
    cout << "Final Price: " << totalPrice - totalDiscount << endl;
    cout << "--------------------------------------------\n";

    return 0;
}


