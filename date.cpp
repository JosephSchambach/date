#include <iostream>
using namespace std;

// Create a class
class Date
{
public:
    // Constructor for Date with a month, day, year
    Date(int m, int d, int y)
    {
        month = m;
        day = d;
        year = y;
    }

    // Function to print out a basic format for the date
    void print()
    {
        cout << month << "/" << day << "/" << year << endl;
    }

    // Function to print out an advanced format for the date
    void format()
    {
        // String variable for the month
        string wordMonth;

        // Switch statement to check the month
        switch (month)
        {
        case (1):
            wordMonth = "January";
            break;
        case (2):
            wordMonth = "February";
            break;
        case (3):
            wordMonth = "March";
            break;
        case (4):
            wordMonth = "April";
            break;
        case (5):
            wordMonth = "May";
            break;
        case (6):
            wordMonth = "June";
            break;
        case (7):
            wordMonth = "July";
            break;
        case (8):
            wordMonth = "August";
            break;
        case (9):
            wordMonth = "September";
            break;
        case (10):
            wordMonth = "October";
            break;
        case (11):
            wordMonth = "November";
            break;
        case (12):
            wordMonth = "December";
            break;
        default:
            wordMonth = "error";
            break;
        }
        cout << "The date entered is " << wordMonth << " " << day << ", " << year << endl;
    }

    // Private variables for month, day, and year
private:
    int month;
    int day;
    int year;
};
