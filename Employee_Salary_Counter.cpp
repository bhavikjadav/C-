/*
5. Create a class “emp” containing the data members Name of employee, [40]
Employee number, Basic Salary, Allowance. Take appropriate member function
and data into class, then after write data into data file called “emp.dat” until user
choice. Display the information of all employee from a file along with pf, total
salary. Use read() and write() function for file, [pf = 12% of basic salary, total
salary = basic salary + Allowances - pf ]
*/

#include<iostream>
#include<iomanip>
#include<fstream>
#include<conio.h>
using namespace std;
        
fstream fileobj("05_journal.txt", ios::out);

class Emp {

    protected:
    string ename;
    int eno;
    float basic_salary, allowance, pf, total_salary;

    public:
    void getDataFromUser() {


        cout << "\nEnter the Employee No : ";
        cin >> eno;

        cout << "\nEnter the name of an Employee : ";
        cin >> ename;

        cout << "\nEnter the basic salary of an Employee : ";
        cin >> basic_salary;

        cout << "\nEnter the allowance amount of Employee : ";
        cin >> allowance;

        fileobj << eno << setw(20) << ename << setw(20) << basic_salary << setw(20) << allowance << setw(20);
    }

    void calculationOfSalary() {

        pf = (basic_salary * 0.2);
        total_salary = ((basic_salary + allowance) - pf);
        fileobj << pf << setw(20) << total_salary << endl;
    }

    void displayInConsole() {

        fileobj >> eno;
        fileobj >> ename;
        fileobj >> basic_salary;
        fileobj >> allowance;
        fileobj >> pf;
        fileobj >> total_salary;

        cout << eno << setw(20) << ename << setw(20) << basic_salary << setw(20) << allowance << setw(20) << pf 
        << setw(20) << total_salary << endl;
    }
};

int main() {
    
    int i, n;
        
    Emp employee[25];

    cout << "\nHow many entries you want ? : ";
    cin >> n;

    for(i = 1; i <= n; i++) {
        
        employee[i].getDataFromUser();
        employee[i].calculationOfSalary();
    }

    cout << "\nFollowing Data are sucessfully stored in 05_journal.txt : " << endl << endl;

    cout << "EMP_NO" << setw(20) << "EMP_NAME" << setw(20) << "BASIC_SALARY" << setw(20) << "ALLOWANCE" 
    << setw(20) << "PROVIDENT_FUND" << setw(20) << "TOTAL_SALARY"<< endl;
    for(i = 1; i <= n; i++) {

        employee[i].displayInConsole();
    }
    getch();
    return 0;
}