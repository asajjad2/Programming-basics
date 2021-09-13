//Areeb Sajjad - 20I0904 - Assignment 1

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
#define pi 3.14

int main()
{
    int h, s, r, V, A;
    cout << "Kindly input the height of cone\n";
    cin >> h;
    cout << "Kindly input the radius of cone's base\n";
    cin >> r;
    cout << "Kindly input the slant height of the cone\n";
    cin >> s;
    V = (pi * pow(r,2)) / (3);
    A = (pi * pow(r,2)) + (pi * r * s);
    cout << "The Surface Area of the cone is " << A << endl;
    cout << "The Volume of the cone is " << V << endl;

    return 0;
}

