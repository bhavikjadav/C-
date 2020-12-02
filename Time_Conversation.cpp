/*
2. W A C++ program to create two class Time 12 & Time 24. Take input from
user for Hours , Minutes , Seconds , & convert object of Time 12 class to Time 24
class and vice versa .
*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;

class Time12 {

    public:
    void TimeData1(int hour, int minutes, int seconds) {
        if(hour>12) {
            hour = hour - 12;
        }
        cout << "\nTime in 12 hour format.";
        cout << "\n" << hour << " : " << minutes << " : " << seconds << " AM" << endl;
    }
};

class Time24 {

    public:
    void TimeData2(int hour, int minutes, int seconds) {
        if(hour<12) {
            hour = hour + 12;
        }
        cout << "\nTime in 24 hour format.";
        cout << "\n" << hour << " : " << minutes << " : " << seconds << " PM" << endl;
    }
};

int main() {
    int hours, minutes, seconds;

    Time12 firstobj;
    Time24 secondobj;
    
    cout << "\nEnter the hours : ";
    cin >> hours;
    if (hours > 24) {
        cout << "\nEnter the valid hours.!" << endl;
        getch();
        exit(0);
    }

    cout << "\nEnter the minutes : ";
    cin >> minutes;
    if (minutes > 60) {
        cout << "\nEnter valid minutes.!" << endl;
        getch();
        exit(0);
    }

    cout << "\nEnter the seconds : ";
    cin >> seconds;
    if (seconds > 60) {
        cout << "\nEnter valid minutes.!" << endl;
        getch();
        exit(0);
    }

    firstobj.TimeData1(hours, seconds, minutes);
    secondobj.TimeData2(hours, seconds, minutes);
    getch();
    return 0;
}