#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int length;
    cout << "Please input array length\n";
    cin >> length;
    while(length<=0)
    {
        cout << "cannot be less than 1\n";
        cin >> length;
    }
    int MainArray[length];
    cout << "Input elements\n";
    for(int i=0;i<length;i++)
        cin >> MainArray[i];
    int MaxDifference=0,MinDifference=1000,MaxVal1,MaxVal2,MinVal1,MinVal2;
    for(int i=0;i<length-1;i++)
    {
        for(int j=0;j<length-1;j++)
        {
            if(abs(MainArray[i]-MainArray[j])>MaxDifference)
            {
                if(MainArray[i]==MainArray[j])
                    continue;
                MaxDifference=abs(MainArray[i]-MainArray[j]);
                MaxVal1=MainArray[i];
                MaxVal2=MainArray[j];
            }
            if(abs(MainArray[i]-MainArray[j])<MinDifference)
            {
                if(MainArray[i]==MainArray[j])
                    continue;
                MinDifference=abs(MainArray[i]-MainArray[j]);
                MinVal1=MainArray[i];
                MinVal2=MainArray[j];
            }
        }
    }
    cout << "The pair of elements with Maximum Difference is " << MaxVal1 << " & " << MaxVal2 << " with the difference of " << MaxDifference << endl;
    cout << "The pair of elements with Minimum Difference is " << MinVal1 << " & " << MinVal2 << " with the difference of " << MinDifference << endl;


    return 0;

}
