// Author: Jonathan Lopez
// Program Purpose: To collect a day, month, year, check if it is a leap year and to display the day/month/year in three formats.

#include <iostream>
#include "DateSpecification.h"

using namespace std;

int main(){

    // ------------------------------- ]
    // For Reader:                     ]
    // To create a new date,           ]
    // create a new object, pass       ]
    // day, month, year to params      ]
    // and use .printReport() memeber  ]
    // function to output your date in ]
    // 3 formats.                      ]
    //                                 ]
    // USABLE METHODS:                 ]
    // getMonth()                      ]
    // getDay()                        ]
    // getYear()                       ]
    // isLeapYear() 1 = true, 0 = false]
    // lastDay()                       ]
    // ------------------------------- ]



    // Set Date via Constructor
    Date date1(12, 30, 2020);
    // print in three formats
    date1.printReport();

    // Note, when you call any of these member functions it only returns a value, since I didn't implement a cout besides in printReport,  you must use cout. Also must end line.
    cout << endl;
    cout << date1.getMonth() << endl;
    cout << date1.getDay() << endl;
    cout << date1.getYear() << endl;
    cout << date1.isLeapYear() << endl;
    cout << date1.lastDay();
}