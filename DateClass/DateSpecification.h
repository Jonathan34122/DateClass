#pragma once
class Date{

private:

	int month, day, year;

public:

	// ---- Constructor v

	Date(int m = 1, int d = 1, int y = 1900);

	// ----- Setters v

	void setDate(int m, int d, int y);

	// ----- Getters v

	int getMonth() const;

	int getDay() const;

	int getYear() const;

	// ---- Leap Year Functions v

	bool isLeapYear() const;

	bool isLeapYear(int year) const; // overloaded

	// ---- Last Day-Of-Month Functions v

	int lastDay() const;

	int lastDay(int month, int year) const; // overloaded

	// ------ Print Function v

	void printReport();

	// ------ Increment Operators v

	Date& operator++();
	Date operator++(int); // postfix

	// ------ Decrement Operators v

	Date& operator--();
	Date operator--(int); // postfix


	// ------ Subtraction Operator v

	int operator-(const Date& other) const;

	// ------ io stream operators v

	friend ostream& operator << (ostream& out, const Date& date);
		friend istream& operator >> (istream& in, Date& date);

};