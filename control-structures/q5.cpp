#include <iostream>

using namespace std;

int main()
{
    int total_people,under10,p10_15,p15_20,k1_5,k5_10,swings_check1,swings_check2,hours,bill1_5,bill5_10,bill10_15,bill15_20,billtotal;
    cout << "Please input the total number of people that will go to the parade?\n";
    cin >> total_people;
    cout << "How many of the people going are under age 10?\n";
    cin >> under10;
    cout << "How many of the people going belong to the age group 10 to 15 inclusive?\n";
    cin >> p10_15; // for people aged 10-15
    cout << "How many of the people going belong to the age group 15 to 20?\n";
    cin >> p15_20; // for people aged 16-20
    cout << "For the kids under age 10, how many of them belong to age group 1 to 5(including 5)?\n";
    cin >> k1_5; //for kids aged 1-5
    cout << "For the kids under age 10, how many of them belong are above 5?\n";
    cin >> k5_10; //for kids aged 6-10
    cout << "How many hours will the people stay there?\n";
    cin >> hours;
    cout << "How many kids under 5 will go to the swings park?\n";
    cin >> swings_check1;
    cout << "How many kids above/including 5 and under 10 will go to the swings park?\n";
    cin >> swings_check2;
    bill1_5=(swings_check1*(100+(10*hours)));
    bill5_10=(swings_check2*(100+(10*hours)));
    bill10_15=(p10_15*(100+(10*hours)));
    bill15_20=(p15_20*(100+(10*hours)));
    cout << "Please note that kids under 10 are only allowed in the swings park\n";
    cout << "Please note that people above 10 are only allowed in the parade park\n";
    cout << "Please note that people above 20 are not allowed\n";
    billtotal=bill1_5+bill5_10+bill15_20+bill10_15;
    cout << "The total bill is " << billtotal << " dollars."<<endl;
    cout << "The discounted total bill is " << (0.5*bill1_5)+(0.75*bill5_10)+(0.9*bill10_15)+(0.95*bill15_20)<< " dollars." <<endl;
    return 0;
}
