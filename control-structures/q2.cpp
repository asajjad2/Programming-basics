//Areeb Sajjad - 20I0904 - Assignment 2

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,y,z,rightx,righty,rightz;
    cout << "Please input 3 non-negative numbers x, y and z\n";
    cin >> x;
    cin >> y;
    cin >> z;
    rightx = x%10;
    righty = y%10;
    rightz = z%10;
    if (x>=0)
    {
        if(y>=0)
        {
            if (z>=0)
            {
                if (rightx == righty)
                {
                    cout<< "The result is: true\n";
                }
                else
                    if(rightx == rightz)
                        cout << "The result is: true\n";
                else
                    if(righty == rightz)
                        cout << "The result is: true\n";
                else
                {
                    cout << "The result is: false\n";
                }

            }
            else
                cout << "You did not enter a non-negative number\n";
        }
        else
                cout << "You did not enter a non-negative number\n";
    }
    else
            cout << "You did not enter a non-negative number\n";
    return 0;
}
