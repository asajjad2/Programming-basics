//Areeb Sajjad 20i0904 Assignment4
#include <iostream>
#include<cmath>

using namespace std;
int main()
{
    int x1,x2;
    cout << "Input size of array 1 and 2\n";
    cin >> x1 >> x2;
    while(x1!=x2)
    {
        cout << "Must be equal in length\nEnter again\n";
        cin >> x1 >> x2;
    }
    cout << "Input elements for array1\n";
    int Array1[x1];
    for(int a=0;a<x1;a++)
        cin >> Array1[a];
    cout << "Input elements for array2\n";
    int Array2[x2];
    for(int a=0;a<x1;a++)
        cin >> Array2[a];

    int size=5, temp_var=0;

    for (int i=0 ; i<size ; i++)
        for(int j=0 ; j<size ; j++)
            if(Array1[i]>Array2[j])
            {
                temp_var = Array2[j];
                Array2[j]=Array1[i];
                Array1[i] = temp_var;
            }

    for(int i=0 ; i<size ; i++)
        for(int j=0 ; j<size ; j++)
            if(Array2[i]<Array1[j])
            {
                temp_var = Array2[j];
                Array2[j]=Array2[i];
                Array2[i] = temp_var;
            }

    for(int i = 0 ; i<size ; i++)
        cout << Array1[i] << " ";

    cout << endl;

    for(int i = 0 ; i<size ; i++)
        cout << Array2[i] << " ";

    return 0;
}
