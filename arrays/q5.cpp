//Areeb Sajjad 20i0904 Assignment4
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,VarTemp;
    cout << "Please input number of characters to be sorted\n";
    cin >> n;
    while(n<=0) //input validation
    {
        cout << "Array size cannot be less than 1. Input again!\n";
        cin >> n;
    }

    char ArrayMain[n];
    cout << "Input Array elements\nNote: Array elements can only be lowercase 'a' 'b' or 'c'\n";
    for(int i=0;i<n;i++)
    {
        cin >> ArrayMain[i];
        while(ArrayMain[i]<97||ArrayMain[i]>99) //Input Validation
        {
            cout << "Array elements can only be lowercase 'a' 'b' or 'c'\n";
            cin >> ArrayMain[i];
        }
    }
    for(int i=0;i<n;i++) //Sorting and printing
    {
        for(int j=0;j<n-i-1;j++)
            if(ArrayMain[j]>ArrayMain[j+1])
            {
                VarTemp=ArrayMain[j];
                ArrayMain[j]=ArrayMain[j+1];
                ArrayMain[j+1]=VarTemp;
            }
        cout << ArrayMain[i];
    }
    return 0;
}

