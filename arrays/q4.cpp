//Areeb Sajjad 20i0904 Assignment4
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,missing=0,repeated=0;

    cout << "Please input array size\n";
    cin >> n;

    while(n<=0)
    {
        cout << "Please input a correct array size\n";
        cin >> n;
    }
    int MainArray[n];
    cout << "Please input Array elements\n";
    for(int i=0;i<n;i++)
        cin >> MainArray[i];
    for(int i=0 ; i<n ; i++)
	{
		if((MainArray[i]+1!= MainArray[i+1])&&(i<(n-1))) //to check missing value
			missing= MainArray[i]+1;
	}
	for(int j=0 ; j<n ; j++)
    {
        for(int k=0;k<n;k++)
        {
            if(MainArray[j]==MainArray[j+k]) //To check repeated value
			repeated=MainArray[j];
        }
    }
    cout << "The missing value is " << missing << endl;
    cout << "The repeated value is " << repeated << endl;
    return 0;
}
