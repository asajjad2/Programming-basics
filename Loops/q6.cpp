//AreebSajjad - I200904 - Assignment_3
#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;
int main()
{
    int random,trials,guess,wins=0;
    char continuity='Y';
    while (continuity=='Y'||continuity=='y')
    {
        for(trials=1;trials<=3;trials++)
        {
            random = 1+rand()%10;
            cout << "Input you guess between 1 and 10 inclusive\n";
            cin >> guess;
            while(guess<1||guess>10) //INPUT VALIDATION
            {
                cout << "Invalid input, try again.\n";
                cin >> guess;
            }
            if(guess==random)
            {
                cout << "You guessed correctly\n";
                wins++;
            }
            else
                cout << "Your guess was incorrect\n";
            cout << "The random number was " << random << endl;
            cout << "You have " << 3-trials << " trials left\n"; //showing remaining trials
        }
        if(wins==2)  //Game Results
            cout << "You won by 2-1";
        else if(wins==3)
            cout << "You won by 3-0";
        else if(wins==1)
            cout << "You lost by 1-2, better luck next time\n";
        else if (wins==0)
            cout << "You lost by 0-3, better luck next time\n";

        cout << "if you want to play again, enter 'Y', else enter a random character to exit.\n"; //asking if want to play again
        cin >> continuity;

    }
    return 0;
}



