#include <iostream>
#include "Date.cpp"
using namespace std;

// Main function for running class Date
int main()
{
    // Declare and initialize variable of type date
    Date date(2, 25, 1946);
    // Print out the two types of date formats
    date.print();
    date.format();

    return 1;
}
