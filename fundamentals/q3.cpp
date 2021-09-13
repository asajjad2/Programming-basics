//Areeb Sajjad - 20I0904 - Assignment 1

#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double Vol1ml, Percentage1, Percentage2, SumChemical;
    int Vol2, Vol2ml;
    Vol1ml = 250;
    Percentage1 = 0.14;
    Percentage2 = 0.54;
    cout << "Please enter the Volume of Solution 2 in Liters\n";
    cin >> Vol2;
    Vol2ml = Vol2 * 1000;

    SumChemical = (Vol1ml * Percentage1) + (Vol2ml * Percentage2);
    cout << "Amount of chemical in the final solution is " << SumChemical << " mL\n";
    return 0;
}

