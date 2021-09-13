//Areeb Sajjad - 20I0904 - Assignment 1 

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A0,A,k,t;
    cout << "Please enter the starting population of bacteria (A0)\n";
    cin  >> A0;
    cout << "Please enter the growth constant (k)\n";
    cin  >> k;
    cout << "Please enter time-elapsed in hours (t)\n";
    cin  >> t;
    if (t < 0)
       {
        cout<< "Please enter a correct value for time\n";
        cin >> t;
       } 
    A=A0*exp(k*t);
    cout << "The population of bacteria after " << t << "hours is " << A;
    return 0;
}

