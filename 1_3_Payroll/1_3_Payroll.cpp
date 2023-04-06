// 1_3_Payroll.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;

#include <iostream>

int main()
{
    const unsigned short maxDays = 14;
    const float tax = 0.1f;

    string name; // Get
    char initials;
    short age;
    int zipCode;

    unsigned int uCount = 0; // Get - Days Worked
    unsigned short hoursWorked = 0;
    unsigned short hours[maxDays]; // Get - Days Hours
    float fGrossPay = 0; // Calculate - Total Hours * Wage
    float netPay = 0; // Calculate - (Gross Pay * (Gross Pay * Tax)
    float fWage = 0; // Get - Pay per hour

    std::cout << "Hello World!\n";

    cout << "\n\n Enter your name: ";
    cin >> name;

    cout << "\n\n Enter your initials: ";
    cin >> initials;

    cout << "\n\n Enter your age: ";
    cin >> age;

    cout << "\n\n Enter your zipcode: ";
    cin >> zipCode;

    cout << "\n\n Enter pay per hour: ";
    cin >> fWage;

    cout << "\n\n Enter days worked: ";
    cin >> uCount;

    for (int iCount = 0; iCount < uCount; iCount++) {
        short temp;
        cout << "\n Enter hours worked for day " << iCount + 1 << ": ";
        cin >> temp;
        hoursWorked += temp;
        hours[iCount] = temp;
    }

    fGrossPay = hoursWorked * fWage;
    netPay = fGrossPay - (fGrossPay * tax);

    cout << "\n " << name << " worked " << hoursWorked << " at " << fWage << " an hour.";
    cout << "\n Gross Income: " << fGrossPay;
    cout << "\n Net Income: " << netPay << "\n\n";

    // 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
