#include <iostream>
#include <string>
#include "DateSpecification.h"

using namespace std;

// ----- Constructor
Date::Date(int m, int d, int y) {
	setDate(m, d, y);
}

// ------ Setter

void Date::setDate(int m, int d, int y) {
	if (y < 1 || m < 1 || m > 12 || d < 1 || d >  lastDay(m, y)) {
		month = 1;
		day = 1;
		year = 1900;
	}
	else {
		month = m;
		day = d;
		year = y;
	}
}

// ----- Getters

int Date::getMonth() const {
	return month;
}

int Date::getDay() const {
	return day;
}

int Date::getYear() const {
	return year;
}

// ----- Check Leap Year

bool Date::isLeapYear() const {
	return isLeapYear(year);
}

bool Date::isLeapYear(int y) const {
	return (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
}

// ----- Last Day Functions

int Date::lastDay() const {
	return lastDay(month, year);
}

int Date::lastDay(int m, int y) const {
	switch (m) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12: // months that have 31 days
		return 31;
	case 4: case 6: case 9: case 11: // months with 30
		return 30;
	}
}

// ---- Print Function

void Date::printReport() {
	string months[] = { " ", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };
	// We  will use m/d/y format.
	cout << month << "/" << day << "/" << year << endl;
	cout << months[month] << " " << day << ", " << year << endl;
	cout << day << " " << months[month] << " " << year << endl;
}

Date& Date::operator++() { // ++date

	day++;

	if (day > lastDay()) {

		day = 1; // reset to day 1.
		month++;

		if (month > 12) { // 13 months = + 1 year, set extra month to 1.
			month = 1;
			year++;
		}
		return *this;
	}

}

	Date Date::operator++(int) { // date++

		Date temporary = *this;
		++(*this);
		return temporary;

	}

	Date& Date::operator--() { // --date

		day--;

		if (day < 1) {
			month--;

			if (month < 1) {
				month = 12;
				year--;

			}
			day = lastDay(month, year);
		}
		return *this;
	}

	Date Date::operator--(int) { // Date--

		Date temporary = *this;
		--(*this);
		return temporary;

	}