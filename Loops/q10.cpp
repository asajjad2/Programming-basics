//AreebSajjad - I200904 - Assignment_3
#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;
void HigherOrLower()
{
    int num1,num2;
    char HiLo;
    cout << "Input H for High if you think number1 is higher than number2\nor L if you think number1 is lower than number2\n";
    cout << "Enter a random character if you want to quit\n";
    cin >> HiLo;
    while (HiLo=='H'||HiLo=='h'||HiLo=='L'||HiLo=='l')
    {
        num1 = 1+rand()%20;
        num2 = 1+rand()%20;
        if (HiLo=='H'||HiLo=='h')
        {
            if(num1>num2)
                cout << "Game Won\n";
            else if(num1<num2)
                cout << "Game Lost\n";
        }
        if(HiLo=='L'||HiLo=='l')
        {
            if(num1<num2)
                cout << "Game Won!\n";
            else if(num1>num2)
                cout << "Game Lost!\n";
        }
        cout << "Game Complete. Please enter a random character to quit!\nNote: if you enter H or L the game would restart.\n";
        cin >> HiLo;
    }
}
void RockPaperScissor()
{
    char choice;
    int computer;
    cout << "Please input:\n1.P for Paper\n2.S for Scissors.\n3.R for Rock\n";
    cin >> choice;
    while(choice=='P'||choice=='p'||choice=='S'||choice=='s'||choice=='R'||choice=='r') //1Paper2Scissors3Rock
    {
        computer=1+rand()%3;
        if(choice=='P'||choice=='p')
        {
            if(computer==1)
                cout<<"Game Draw, Paper cannot beat paper\n";
            if(computer==2)
                cout<<"Game Lost, Scissor beats paper\n";
            if(computer==3)
                cout <<"Game Won, Paper beats rock\n";
        }
        else if(choice=='S'||choice=='s')
        {
            if(computer==1)
                cout<<"Game Won, Scissor beats paper\n";
            if(computer==2)
                cout<<"Game Draw, Scissor cannot beat scissor\n";
            if(computer==3)
                cout <<"Game Lost, Rock beats scissor\n";
        }
        else if(choice=='R'||choice=='r')
        {
            if(computer==1)
                cout<<"Game Lost, Paper beats rock\n";
            if(computer==2)
                cout<<"Game Won, Rock beats scissor\n";
            if(computer==3)
                cout <<"Game Draw, Rock cannot beat rock\n";
        }
    cout << "Game Complete. Please enter a random character to quit!\nNote: if you enter P or S or R, the game would restart.\n";
    cin >> choice;

    }
}
void GuessingGame()
{
    int user1,user2,user3,computer1,computer2,computer3,matching=0,ordermatching=0;
    char GameContinuity='Y';

    while(GameContinuity=='Y'||GameContinuity=='y')
    {
        cout << "Please input 3 numbers between 1 to 9\n";
        cin>>user1>>user2>>user3;
        while(user1<1||user1>9)
        {
            cout << "First Number entered incorrect, try again!\n";
            cin >> user1;
        }
        while(user2<1||user2>9)
        {
            cout << "Second Number entered incorrect, try again!\n";
            cin >> user2;
        }
        while(user3<1||user3>9)
        {
            cout << "Third Number entered incorrect, try again!\n";
            cin >> user3;
        }
        computer1=1+rand()%9;
        computer2=1+rand()%9;
        computer3=1+rand()%9;
        if(user1==computer1)
        {
           matching++;
           ordermatching++;
        }
        else if(user1==computer2)
            matching++;
        else if(user1==computer3)
            matching++;
        if(user2==computer1)
            matching++;
        else if(user2==computer2)
         {
             matching++;
             ordermatching++;
         }
        else if(user2==computer3)
            matching++;
        if(user3==computer1)
            matching++;
        else if(user3==computer2)
            matching++;
        else if(user3==computer3)
        {
            matching++;
            ordermatching++;
        }

        switch(matching)
        {
        case 0:
            cout<<"No Matches\n";
            break;
        case 1:
            cout << "One Match\n";
            break;
        case 2:
            cout << "Two Matching\n";
            break;
        case 3:
            if(ordermatching==3)
                cout << "3 matching in exact order\n";
            else
                cout << "3 matching, not in order\n";
            break;
        default:
            cout << "ERROR\n";
            break;
        }
        cout << "If you want to play again, input Y\nIf you want to quit input a random character!\n";
        cin >> GameContinuity;
    }

}
int main()
{
    int GameChoice;
    bool game1;
    cout << "Welcome to guessing games\n";
    cout << "1. Play Higher or Lower\n";
    cout << "2. Play paper - scissors - rock\n";
    cout << "3. Guess the numbers\n";
    cout << "4. Quit\n";
    cout << "Please enter your choice:\n";
    cin >> GameChoice;
    while(GameChoice<1||GameChoice>4)
    {
        cout << "Error:Please input a number within the range of 1-4\n";
        cin >> GameChoice;
    }
    while(GameChoice!=4)
    {
        if(GameChoice==1)
            HigherOrLower();
        if(GameChoice==2)
            RockPaperScissor();
        if(GameChoice==3)
            GuessingGame();
        cout << "If you want to play another game, Here's the menu:\n";
        cout << "Welcome to guessing games\n";
        cout << "1. Play Higher or Lower\n";
        cout << "2. Play paper - scissors - rock\n";
        cout << "3. Guess the numbers\n";
        cout << "4. Quit\n";
        cout << "Please enter your choice:\n";
        cin >> GameChoice;
    }
    return 0;
}
