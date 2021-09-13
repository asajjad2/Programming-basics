//Areeb Sajjad - 20I0904 - Assignment 1

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
   int SharesBought = 750;
   double SharePrice = 35.00, CommissionPercentage = 0.2, TotalStockAmount, TotalAmountPaid, CommissionAmount;
   TotalStockAmount = SharesBought*SharePrice;
   CommissionAmount = (1+CommissionPercentage) * (TotalStockAmount);
   TotalAmountPaid  = TotalStockAmount+CommissionAmount;
   cout << "The amount paid for the total stocks alone is " << TotalStockAmount << endl;
   cout << "The amount for Commission is " << CommissionAmount << endl;
   cout << "Total Amount to be paid is " << TotalAmountPaid << endl;


    return 0;
}

