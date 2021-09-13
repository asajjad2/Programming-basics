//Areeb Sajjad - 20I0904 - Assignment 1

#include <iostream>

using namespace std;

int main()
{
  int SharesBought = 1000, SharesSold =1000;
  double SharePriceBuying = 45.50, SharePriceSelling = 56.90, CommissionPercentage = 0.2, TotalBuyingAmount, TotalSellingAmount, TotalBuyingCommission, TotalSellingCommission, NetProfit;
  TotalBuyingAmount = SharePriceBuying*SharesBought;
  TotalBuyingCommission = (1+CommissionPercentage) * (TotalBuyingAmount);
  TotalSellingAmount = SharesSold*SharePriceSelling;
  TotalSellingCommission = (1+CommissionPercentage) * (TotalSellingAmount);
  cout << "Amount of Money Joe paid while buying the stocks is " << TotalBuyingAmount << endl;
  cout << "Amount of Money Joe paid as commission while buying the stocks is " << TotalBuyingCommission << endl;
  cout << "Amount Joe sold the stocks for is " << TotalSellingAmount << endl;
  cout << "Amount Joe paid as commission while selling the stocks is " << TotalSellingCommission << endl;
  NetProfit = TotalSellingAmount - (TotalBuyingAmount+TotalBuyingCommission+TotalSellingCommission);
  cout << "Net profit that Joe made is " << NetProfit << endl;
    return 0;
}

