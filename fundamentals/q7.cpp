//Areeb Sajjad - 20I0904 - Assignment 1

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int TempNYC = 85, TempDenver = 88, TempPhoenix = 106, NewTempNYC, NewTempDenver, NewTempPhoenix;
    double TempRisePercent = 0.2;
    NewTempNYC = (TempNYC) + (TempRisePercent*TempNYC);
    NewTempDenver = (TempDenver) + (TempRisePercent*TempDenver);
    NewTempPhoenix = (TempPhoenix) + (TempRisePercent*TempPhoenix);
    cout << "The new average July high temperature for New York City is " << NewTempNYC << endl;
    cout << "The new average July high temperature for Denver is " << NewTempDenver << endl;
    cout << "The new average July high temperature for Phoenix is " << NewTempPhoenix << endl;


    return 0;
}

