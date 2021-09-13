//Areeb Sajjad - 20I0904 - Assignment 1

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   double R, E, S;
   int V;
   cout << "Please enter the length of the row, in feet\n";
   cin >> R;
   cout << "Please enter the amount of space used by an end-post assembly, in feet\n";
   cin >> E;
   cout << "Please enter the amount of space between the vines, in feet\n";
   cin >> S;
   V = (R-(2*E))/(S);
   cout << "The number of grapevines that will fit in this row are " << V << endl;


    return 0;
}

