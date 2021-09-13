//Areeb Sajjad 20i0904 Assignment4
#include <iostream>
using namespace std;
int main()
{
    int rows1,columns1,rows2,columns2;

    cout << "Kindly input number of rows for matrix1\n";
    cin >> rows1;
    cout << "Kindly input number of columns for matrix1\n";
    cin >> columns1;
    cout << "Kindly input number of rows for matrix2\n";
    cin >> rows2;
    cout << "Kindly input number of columns for matrix\n";
    cin >> columns2;
    while(rows1<=0) //Input Validation begins here
    {
        cout << "Number of rows cannot be less than 1\nKindly input again!\n";
        cin >> rows1;
    }
    while(columns1<=0)
    {
        cout << "Number of columns cannot be less than 1\nKindly input again!\n";
        cin >> columns1;
    }
    while(rows2<=0)
    {
        cout << "No of rows cannot be less than 1\nKindly input again!\n";
        cin >> rows2;
    }
    while(columns2<=0)
    {
        cout << "No of columns cannot be less than 1\nKindly input again!\n";
        cin >> columns2;
    } // Input validated
    if(columns1!=rows2)
    {
        cout << "The two matrices entered cannot be multiplied. Please try again with another matrix!\n";
        exit(0);
    }
    int mat1[rows1][columns1];
    int mat2[rows2][columns2];
    int ResultantMat [rows1][columns2];
    cout << "Kindly input each element belonging to matrix 1\nNote: Enter the elements row-vise\n";
	for( int i=0; i<rows1 ; i++)
	{
		for ( int j=0; j<columns1 ; j++)
		{
			cin >> (mat1[i][j]);
		}
	}
	cout << "Kindly input each element belonging to matrix 2\nNote: Enter the elements row-vise\n";
	for( int x=0; x<rows2 ; x++)
	{
		for ( int y=0; y<columns2 ; y++)
		{
			cin >> (mat2[x][y]);
		}
	}
    for (int  a= 0; a< rows1; a++)
    {
        for (int b = 0; b< columns2; b++)
        {
            ResultantMat[a][b] = 0;
            for (int  c= 0;  c< rows2; c++)
            {
                ResultantMat[a][b]+=mat1[a][c]*mat2[c][b];
            }
        }
    }
    cout << "The resultant Matrix is displayed below\n";
    for(int p=0;p<rows1;p++)
    {
        for(int q=0;q<columns2;q++)
        {
            cout << ResultantMat[p][q] << " ";
        }
        cout << endl;
    }
    return 0;
}
