//Areeb Sajjad 20i0904 Assignment4
#include <iostream>
#include<cmath>
using namespace std;
double NormCalculator(int MainMatrix[][10],int rows, int columns)
{
    int NormSquared=0;
    double Norm;
    for( int i=0; i<rows ; i++)
	{
		for ( int j=0; j<columns ; j++)
		{
			NormSquared+=(MainMatrix[i][j])*(MainMatrix[i][j]);
		}
	}
	Norm=sqrt(NormSquared);
    return Norm;
}
int main()
{
    int rows1,columns1;
    cout << "Please input number of rows and columns in the matrix\n";
    cin >> rows1;
    cin >> columns1;
    while(rows1<=0) //Input Validation
    {
        cout << "Rows cannot be less than 1, Input again\n";
        cin >> rows1;
    }
    while(columns1<=0)
    {
        cout << "Columns cannot be less than 1, Input again\n";
        cin >> columns1;
    }
    int MainMatrix[10][10];
    cout << "Kindly input each element belonging to the matrix\nNote: Enter the elements row-vise\n";
	for( int i=0; i<rows1 ; i++)
	{
		for ( int j=0; j<columns1 ; j++)
		{
			cin >> (MainMatrix[i][j]);
		}
	}
	cout <<"The norm of the matrix entered is " << NormCalculator(MainMatrix,rows1,columns1);
    return 0;
}
