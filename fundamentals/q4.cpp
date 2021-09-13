//Areeb Sajjad - 20I0904 - Assignment 1

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{

    double SeatCostA = 20, SeatCostB = 15, SeatCostC = 10, SeatCostD = 5, TicketSoldA, TicketSoldB, TicketSoldC, TicketSoldD, TotalIncome;
    cout << "Kindly Input Number of Tickets A sold\n";
    cin >> TicketSoldA;
    cout << "Kindly Input Number of Tickets B sold\n";
    cin >> TicketSoldB;
    cout << "Kindly Input Number of Tickets C sold\n";
    cin >> TicketSoldC;
    cout << "Kindly Input Number of Tickets D sold\n";
    cin >> TicketSoldD;
    TotalIncome = (SeatCostA * TicketSoldA) + (SeatCostB * TicketSoldB) + (SeatCostC * TicketSoldC) + (SeatCostD * TicketSoldD);
    cout << "Your total income is " << setprecision(2) << showpoint << fixed << TotalIncome << " Dollars.\n";


    return 0;
}

