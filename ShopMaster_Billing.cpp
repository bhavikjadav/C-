/*
3. Design a class Item contains members as item code, description, price, quantity
& item_name. Create methods for taking input & displaying output, also create a
method for calculating NET amount of items.
*/

#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <conio.h>
using namespace std;

class Item {

    protected:
    int item_code, quantity;
    string item_name, description;
    float price, final_amount;

    public:
    void takeInput() {
        cout << "\nEnter the code of an Item : ";
        cin >> item_code;
        cout << "\nEnter the name of an Item : ";
        cin >> item_name;
        cout << "\nEnter the quantity of an Item : ";
        cin >> quantity;
        cout << "\nEnter the price of an Item : ";
        cin >> price;
        cout << "\nEnter the description of an Item : ";
        cin >> description;
    }

    void calculationOfAmount() {
        final_amount = quantity * price;
    }

    void displayOutput() {
        cout << setw(20) << item_code << setw(20) << item_name << setw(20)
        << quantity << setw(20) << price << setw(20) << description << setw(20) << final_amount << setw(20) << endl;
    }
};

int main() {

    int n, i;
    Item itemobj[50];

    cout << "\nHow many customers are there ? : ";
    cin >> n;
    if (n == 0) {
        cout << "\nOkay, No customers are there, you are just playing with the program.." << endl;
        exit(0);
    }

    for (i = 1; i <= n; i++) {
        itemobj[i].takeInput();
    }

    cout << "\n" << setw(20) << "ITEM_CODE" << setw(20) << "ITEM_NAME" << setw(20)
    << "QUANTITY" << setw(20) << "PRICE" << setw(20) << "DESCRIPTION" << setw(20) << "NET AMOUNT" << setw(20) << endl << endl;

    for (i = 1; i <= n; i++) {
        itemobj[i].calculationOfAmount();
        itemobj[i].displayOutput();
    }
    getch();
    return 0;
}
