/*
1. Write a program which create Default constructor, Parameterized & Copy
constructor.
*/

#include<iostream>
#include<conio.h>
using namespace std;

class AboutConstructor {
    
    string name;
    string surname;
    
    public:
    // Default Constructor Begins.
    AboutConstructor() {
        cout << "\nWe are inside the default constructor."<<endl;
        name = "Bhavik";
        surname = "Jadav";
        cout << "Name : " << name << endl;
        cout << "Surname : " << surname << endl;
    }

    // Parameterized Constructor Begins.
    AboutConstructor(string cname, string csurname) {
        cout << "\nWe are inside the parameterized constructor." << endl;
        cout << "Name : " << cname << endl;
        cout << "Surname : " << csurname << endl;
    }

    // Copy Constructor Begins.
    AboutConstructor(AboutConstructor &obj) {
        cout << "\nWe are inside the copy constructor." << endl;
        name = obj.name;
        surname = obj.surname;
        cout << "Name : " << name << endl;
        cout << "Surname : " << surname << endl;
    }
};

int main() {

    AboutConstructor defaultc;
    AboutConstructor parameterc("Mehul", "Rana");
    AboutConstructor copyc(defaultc);
    getch();
    return 0;
}