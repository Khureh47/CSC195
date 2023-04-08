#pragma once

class Employee {
public:
	float tax = 0.1f;

	char name[32];
	short age;
	int zipCode;
	float wage;
	short daysWorked;
	short hoursWorkedPerDay[7];
	short totalHours;

	float fGrossPay;
	float netPay;

	void Write();
	void Read();
};