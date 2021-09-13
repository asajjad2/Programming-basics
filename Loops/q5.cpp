//AreebSajjad - I200904 - Assignment_3
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i,j,k,l;
    for(i=0;i<=5;i++)
    {
        for(j=1;j<=(2*i);j++)
            cout<<"\\";
        for(k=1;k<=22-(4*i);k++)
            cout << "!";
        for(l=1;l<=(2*i);l++)
            cout<<"/";
        cout << endl;
    }
    return 0;
}
