#include <iostream>
#include "Employee.h";

using namespace std;

void Employee::Write() {
	totalHours = 0;

	cout << "\n Enter name: ";
	cin >> name;
	cout << "\n Enter age: ";
	cin >> age;
	cout << "\n Enter zipcode: ";
	cin >> zipCode;
	cout << "\n Enter wage: ";
	cin >> wage;
	cout << "\n (Limit 7) Enter days worked: ";
	cin >> daysWorked;
	
	if (daysWorked > 7) {
		daysWorked = 7;
	}

	for (int iCount = 0; iCount < daysWorked; iCount++) {
		short hour;
		cout << "\n Enter hours worked on day " << iCount + 1 << " : ";
		cin >> hour;
		totalHours += hour;
		hoursWorkedPerDay[iCount] = hour;
	}

	fGrossPay = totalHours * wage;
	netPay = fGrossPay - (fGrossPay * tax);
}

void Employee::Read() {
	cout << "\n " << name << " worked " << totalHours << " at " << wage << " an hour.";
	cout << "\n Gross Income: " << fGrossPay;
	cout << "\n Net Income: " << netPay;
}