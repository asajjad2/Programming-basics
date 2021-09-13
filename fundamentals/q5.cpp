//Areeb Sajjad - 20I0904 - Assignment 1

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    int a, b, c, R, X1, X2;
    cout << "A quadratic equation is of the form ax^2 + bx + c\n";
    cout <<"kindly enter the values for a,b and c\n";
    cin >> a >> b >> c;
    R = sqrt( (pow(b,2)) - (4*a*c));
    X1 = (-b + R)/(2*a);
    X2 = (-b-R)/(2*a);
    cout << "the values of a, b and c are: \n" << a << " " << b << " " << c << "\n";
    cout << "X1 and X2 are: \n" << X1 << " " << X2;
    return 0;
}

