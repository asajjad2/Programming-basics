#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int CoeffecientMatrix[2][2];//Step1
    cout << "A linear equation is of the form ax+by=c; where a b and c are constants/nPlease input a and b for each equation respectively\n";
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cin >> CoeffecientMatrix[i][j];
    }

    int ConstantMatrix[2];//Step2
    cout << "Now input the constants\n";
    for(int i=0;i<2;i++)
        cin >> ConstantMatrix[i];
    int Determinant=(CoeffecientMatrix[0][0]*CoeffecientMatrix[1][1])-(CoeffecientMatrix[0][1]*CoeffecientMatrix[1][0]);//FindingDeterminant
    if(Determinant==0)
        cout << "Determinant equals zero; matrix is singular and solving the system of equations is not possible!\n";
    else
    {
        int MatrixX[2][2];
        int MatrixY[2][2];
        for(int i=0;i<2;i++) //filling in matrix DX
        {
            for(int j=0;j<2;j++)
            {
                if(j==0)
                {
                    MatrixX[i][j]=ConstantMatrix[i];
                }
                else
                {
                    MatrixX[i][j]=CoeffecientMatrix[i][j];
                }
            }
        }
        for(int i=0;i<2;i++) //filling in matrix DY
        {
            for(int j=0;j<2;j++)
            {
                if(j==0)
                {
                    MatrixY[i][j]=CoeffecientMatrix[i][j];
                }
                else
                {
                    MatrixY[i][j]=ConstantMatrix[i];
                }
            }
        }
        for(int i=0;i<2;i++)//-----------------
        {
            for(int j=0;j<2;j++)
                cout << MatrixX[i][j] << " ";
            cout << endl;
        }
        for(int i=0;i<2;i++)//----------------
        {
            for(int j=0;j<2;j++)
                cout << MatrixY[i][j] << " ";
            cout << endl;
        }
        int Dx,Dy;
        Dx=(MatrixX[0][0]*MatrixX[1][1])-(MatrixX[0][1]*MatrixX[1][0]);
        Dy=(MatrixY[0][0]*MatrixY[1][1])-(MatrixY[0][1]*MatrixY[1][0]);
        int x=Dx/Determinant;
        int y=Dy/Determinant;
        cout << "x = " << x<<endl;
        cout << "y = " << y<<endl;

    }



    return 0;

}
