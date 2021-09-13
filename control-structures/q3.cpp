//Areeb Sajjad - 20I0904 - Assignment 2

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int gallons;
    double bill,service;
    cout << "Please enter the number of gallons consumed\n";
    cin >> gallons;
    if (gallons <0)
        cout << "You entered a wrong number\n";
    else
    {
        if (gallons<=100)
        {
            bill = gallons * 0.45;
        }
        else if(gallons<=350)
        {
            bill = 45 + ((gallons-100)*0.85);
        }
        else if(gallons <= 600)
        {
            bill = 45 + 212.5 + ((gallons-350)*1.45);
        }
        else if(gallons>600)
        {
            bill = 45 + 212.5 + 362.5 +((gallons-600)*2.60);
        }

        cout << "Your bill is " << fixed << setprecision(2) << bill << " dollars." << endl;
        service = 0.14 * bill;
        cout << "Service charges are " << fixed << setprecision(2) << service << " dollars." << endl;
        cout << "Your total water consumption bill is " << fixed << setprecision(2) << service + bill << " dollars." << endl;
    }
    return 0;
}
