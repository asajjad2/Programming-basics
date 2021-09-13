//AreebSajjad - I200904 - Assignment_3
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int blanks,a,b,rows;
    cout << "Please input the number of rows\n";
    cin >> rows;
    char character=65;
    blanks=rows-1;
    //for loop for upper half of diamond
    for(a=1;a<=rows;a++)
    {
        for (b=1;b<=blanks;b++) //printing blank spaces
        {
            cout << " ";
        }
        for (b=1;b<=(2*a)-1;b++) //printing characters
        {
            cout << character;
            character++;
        }
        blanks--;
        cout << endl;
    }
    //for loop for lower half of diamond
    blanks=1;
    for(a=1;a<=rows-1;a++) //printing blank spaces
    {
        for(b=1;b<=blanks;b++)
        {
            cout << " ";
        }
        for(b=1;b<=(2*(rows-a)-1);b++)
        {
            cout << character;
            character--;
        }
        blanks++;
        cout << endl;
    }

    return 0;
}
