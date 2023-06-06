#include <iostream>
using namespace std;

int main()
{
    //1
    int x1;
    cout << "Enter x1: ";
    cin >> x1;
    int y1;
    cout << "Enter y1: ";
    cin >> y1;
    int x2;
    cout << "Enter x2: ";
    cin >> x2;
    int y2;
    cout << "Enter y2: ";
    cin >> y2; 
    if (x1 == x2 && y1 != y2) {
        cout << "Parallel to the y-axis\n\n";
    }
    else if (y1 == y2 && x1 != x2) {
        cout << "Parallel to the x-axis\n\n";
    }
    else {
        cout << "Not in parallel\n\n";
    }
    

    //2
    double num;
    cout << "Enter number: ";
    cin >> num;
    if ((int)num == num) {
        cout << "Whole number\n\n";
    }
    else {
        cout << "Real numbers\n\n";
    }
    

    //3
    int seconds;
    cout << "Enter seconds: ";
    cin >> seconds;
    int minutes;
    cout << "Enter minutes: ";
    cin >> minutes;
    int hours;
    cout << "Enter hours: ";
    cin >> hours;
    if (seconds >= 0 && seconds < 60 && minutes >= 0 && minutes < 60 && hours >= 0 && hours < 24) {
        cout << "Correct time\n\n";
    }
    else{
        cout << "Wrong time\n\n";
    }
    

    //4
    int ticketNum;
    cout << "Enter number (000000 - 999999): ";
    cin >> ticketNum;
    int num1 = ticketNum / 100000;
    int num2 = (ticketNum / 10000) % 10;
    int num3 = (ticketNum / 1000) % 10;
    int num4 = (ticketNum / 100) % 10;
    int num5 = (ticketNum / 10) % 10;
    int num6 = ticketNum % 10;
    if (num1 + num2 + num3 == num4 + num5 + num6) {
        cout << "Lucky ticket!\n\n";
    }
    else {
        cout << "Regular ticket!\n\n";
    }
    

    //5
    int day;
    cout << "Enter day: ";
    cin >> day;
    int month;
    cout << "Enter month: ";
    cin >> month;
    int year;
    cout << "Enter year: ";
    cin >> year;
    if (day > 0 && day < 31 && month % 2 != 0) {
        cout << day + 1 << " " << month << " " << year << "\n\n";
    }
    else if (day == 31 && month % 2 != 0) {
        cout << day / day << " " << month + 1 << " " << year << "\n\n";
    }
    else if (day > 0 && day < 30 && month % 2 == 0 && month != 2) {
        cout << day + 1 << " " << month << " " << year << "\n\n";
    }
    else if (day == 30 && month % 2 == 0 && month != 2) {
        cout << day / day << " " << month + 1 << " " << year << "\n\n";
    }
    else if (day == 31 && month == 12) {
        cout << day / day << " " << month / month << " " << year + 1 << "\n\n";
    }
    else if (day == 28 && month == 2 && year % 4 != 0) {
        cout << day / day << " " << month + 1 << " " << year << "\n\n";
    }
    else if (day == 28 && month == 2 && year % 4 == 0) {
        cout << day + 1 << " " << month << " " << year << "\n\n";
    }
    else if (day == 29 && month == 2 && year % 4 == 0) {
        cout << day / day << " " << month + 1 << " " << year << "\n\n"; 
    }
    else {
        cout << "Wrong data!";
    }
}

