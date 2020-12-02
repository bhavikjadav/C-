/*
4. Create a class customer containing customer_id,name,address as datamember
and add_custome and display_customer as member function. A derived class order
is created from the class customer which containing price1,price2,price3 as price of
three products and input_price and display_order as member functions.create an
array of object of order class and display the information of 5 customer.
*/

#include<iostream>
#include<iomanip>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class Customer {

    protected:
    int customer_id;
    string name, address;

    public:
    void add_customer() {
        
        cout << "\nEnter the customer id : ";
        cin >> customer_id;
        cout << "\nEnter the name of customer : ";
        cin >> name;
        cout << "\nEnter the address of customer : ";
        cin >> address;
    }

    void display_customer() {

        cout << setw(20) << customer_id << setw(20) << name << setw(20) << address << setw(20) ;
    }
};

class Order : public Customer {

    protected:
    float price1, price2, price3;

    public:
    void input_price() {

        cout << "\nEnter the price of 1st product : ";
        cin >> price1;
        cout << "\nEnter the price of 2nd product : ";
        cin >> price2;
        cout << "\nEnter the  price of 3rd product : ";
        cin >> price3;
    }

    void display_order() {
        
        cout << setw(15) << customer_id << setw(15) << name << setw(15) << address 
        << setw(15) << price1 << setw(15) << price2 << setw(15) << price3 << endl;
    }
};

int main() {

    int i, n;

    cout << "\nHow many entries do you want ? : ";
    cin >> n;

    Order customerFixObject[50];

    for(i=1; i<=n; i++) {

        customerFixObject[i].add_customer();
        customerFixObject[i].input_price();
    }

    cout << "\n" << setw(15) << "CUSTOMER_ID" << setw(15) << "NAME" << setw(15) << "ADDRESS" 
    << setw(15) << "1st_PROD." << setw(15) << "2nd_PROD." << setw(15) << "3rd_PROD." << endl;
    for(i=1; i<=n; i++) {

        customerFixObject[i].display_order();
    }
    getch();
    return 0;
}