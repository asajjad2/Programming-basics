//Areeb Sajjad - 20I0904 - Assignment 1

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   double WidgetWeightInd = 12.5, PalleteWeightInd, PalleteWeightTotal, WidgetWeight;
   int TotalWidges;
   cout << "How much does the Pallete alone weigh? (in pounds)\n";
   cin >> PalleteWeightInd;
   cout << "What is the total Pallete weight with widgets?\n";
   cin >> PalleteWeightTotal;
   WidgetWeight = PalleteWeightTotal - PalleteWeightInd;
   TotalWidges = WidgetWeight / WidgetWeightInd;
   cout << TotalWidges << " Widges are attached on the pallete.\n";

    return 0;
}

