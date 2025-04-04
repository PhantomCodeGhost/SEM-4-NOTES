// 1.Write a C++ program to check if number is prime or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    
    cout<<"Enter a number : ";
    cin>>n;

    for(int i = 1; i<=n; i++){
        if(n % i == 0){
            count++;
        }
    }

    printf((count > 2) ? "It is Not a Prime Number" : "It is Prime Number");

}



/* Q2. Create a base class Media. Derive two different classes Book (Book_id, Book_name,
    Publication, Author, Book_price) and CD (CD_title, CD_price) from Media. Write a program
    to accept and display information of both Book and CD. (Use pure virtual function) */

    #include<iostream>
    #include<string>
    using namespace std;
    
    class Media{
        public :
            virtual void accept() = 0;
            virtual void display() const = 0;
    
    };
    class Book : public Media{
        private :
            int Book_id;
            string Book_name;
            string Publication;
            string Author;
            int Book_price;
        public:
            void accept() override {
                cout<<"Enter Book Id : ";
                cin>>Book_id;
                cin.ignore();
                cout<<"Enter Book Name : ";
                getline(cin, Book_name);
                cout<<"Enter Book Publication : ";
                getline(cin , Publication);
                cout<<"Enter Book Author : ";
                getline(cin, Author);
                cout<<"Enter Book Price : ";
                cin>>Book_price;
            }
    
            void display() const override {
                cout<<"Id : "<<Book_id<<endl;
                cout<<"Name : "<<Book_name<<endl;
                cout<<"Publication : "<<Publication<<endl;
                cout<<"Author : "<<Author<<endl;
                cout<<"Price : "<<Book_price<<endl;
    
            }
    };
    class CD : public Media{
        private :
            string CD_title;
            int CD_price;
        public :
            void accept() override {
                cin.ignore();
                cout<<"Enter CD Title : ";
                getline(cin, CD_title);
                cout<<"Enter CD Price : ";
                cin>>CD_price;
            }
    
            void display() const override{
                cout<<"CD Title : "<<CD_title<<endl;
                cout<<"CD Price : "<<CD_price<<endl;
            }
    };
    int main(){
    
        Book b1;
        CD cd1;
    
        b1.accept();
        cout<<"=== Book Details === "<<endl;
        b1.display();
    
    
        cd1.accept();
        cout<<"=== CD Details === "<<endl;
        cd1.display();
        return 0;
    }
    
    /* ADVANCED METHOD
    Media* media1 = new Book(); // Base class pointer pointing to Book object
        Media* media2 = new CD();   // Base class pointer pointing to CD object
    
        cout << "Enter Book Information:" << endl;
        media1->accept();
        cout << "\nEnter CD Information:" << endl;
        media2->accept();
    
        cout << "\nDisplaying Information:" << endl;
        media1->display();
        cout << endl;
        media2->display();
    
        // Clean up dynamically allocated memory
        delete media1;
        delete media2;
    
        return 0;
    }*/