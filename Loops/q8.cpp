//AreebSajjad - I200904 - Assignment_3
#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;
int main()
{

    int i,j,k,lines,cheers;
    cout << "Please input number of lines and number of cheers\n";
    cin >> lines >> cheers;
    while(lines<0) //Input Validation
    {
        cout << "Lines cannot be negative, enter lines again!\n";
        cin >> lines;
    }
    while(cheers<0) //Input Validation
    {
        cout << "cheers cannot be negative, enter cheers again!\n";
        cin >> cheers;
    }
    for(i=1;i<=lines;i++)
    {
        for(j=1;j<=cheers;j++)
        {
            if(j==1)
                cout << "Go ";
            if(j>1)
            cout<< "Buddy Go ";
        }
        cout << "\n";
        for(k=0;k<=i-1;k++)
        {
            cout << "   ";
        }

    }
    return 0;
}




