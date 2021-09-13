//AreebSajjad - I200904 - Assignment_3
#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;
int main()
{

    int balance,order=1,cost=0,total=0,grandtotal=0;
    char membership;
    cout <<"Please input the balance in your credit card\n";
    cin >> balance;
    while(balance<0)//Input Validation
    {
        cout << "Error: please input a correct balance amount\n";
        cin >> balance;
    }
    while(order!=0)
    {
        cout<< "Menu:1.Pizza= 1500\n2.Rice= 350\n3.Steak = 1100\n4.Spaghetti=500\n5.Tea=30\n";
        cout<< "Note:Enter 0 when you're done!\n";
        cin >> order;
        while(order<0||order>5) //Input Validation
        {
            cout << "Please input a valid order option\n";
            cin >> order;
        }
        switch(order)
        {
            case 1:
                cost=1500;
                break;
            case 2:
                cost=350;
                break;
            case 3:
                cost=1100;
                break;
            case 4:
                cost=500;
                break;
            case 5:
                cost=30;
                break;
            case 0:
                cout<< "Thankyou for visiting!\n";
                break;
            default:
                cout<< "Invalid option\n";
                break;
        }
        if(order!=0)
        {
            total+=cost;
            if((total*1.16)>balance)
            {
                cout << "Insufficient balance, please select another item.\n";
                total=total-cost;
            }
        }

    }
    cout << "Do you have a membership card with our restaurant?\nInput Y or N\n";
    cin >> membership;
    if(membership=='Y'||membership=='y')
        total=total-(total*0.1);
    grandtotal=1.16*total;
    cout << "Your final bill is (including GST) " << grandtotal <<endl;
    cout << "Your remaining credit card balance is " << balance-grandtotal<<endl;
    return 0;
}



