//AreebSajjad - I200904 - Assignment_3
#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;
int main()
{

    int tickets=60,group,revenue=0;
    char stop = 'N';
    while(tickets!=0&&stop!='Y')
    {
        cout << "How many tickets needed?\n";
        cin >> group;
        while(group<0)
        {
            cout << "Incorrect number. Enter again\n";
            cin >> group;
        }
        if(tickets>6)
        {
           if(group==1)
            {
                revenue+=1999;
                tickets--;
            }
            else if(group==3)
            {
                revenue+=(group*1999)*0.9;
                tickets=tickets-group;
            }
            else
            {
                revenue+=(group*1999);
                tickets=tickets-group;
            }

        }
        else if(tickets<=6)
        {
            if(group==1)
            {
                revenue+=999;
                tickets--;
            }
            else if(group==3)
            {
                revenue+=(3*999)*0.9;
                tickets=tickets-3;
            }
            else
            {
                revenue+=(group*999);
                tickets=tickets-group;
            }
        }
        cout << "Input Y if you want to stop selling tickets else input a random character\n";
        cin >> stop;

    }
    cout << "Total revenue generated: " << revenue << " Rs.\n";
    cout << "Total tickets sold: " << 60-tickets << endl;
    cout << "Remaining tickets: " << tickets << endl;
    return 0;
}



