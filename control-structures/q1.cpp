//Areeb Sajjad - 20I0904 - Assignment 2

#include <iostream>
using namespace std;
int main()
{ 
    int year;
    cout << "Please input the year\n";
    cin >> year;
    if (year%4 == 0)
    {
        if(year%100 == 0)
        {
            if (year % 400 == 0)
                cout << "The century year is a leap year\n";
        }
        else 
        	cout << "The year you entered is a leap year but not a century year\n";
    }
    else 
        cout<<"The year you entered is not a leap year"; 
    
    return 0;
}
