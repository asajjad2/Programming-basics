#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int ArrayNumber,length;
    cout << "Input number of arrays you want to mantain\n";
    cin >> ArrayNumber;
    while(ArrayNumber<=0) //Input Validation
    {
        cout << "cannot be less than 1\n";
        cin >> ArrayNumber;
    }
    cout << "Input length of each array\n";
    cin >> length;
    while(length<=0) //Input Validation
    {
        cout << "cannot be less than 1\n";
        cin >> length;
    }
    int AllTheArrays[ArrayNumber][length]; //each row of this array is considered as an individual array.
    cout << "Input elements of each array\n";
    for(int i=0;i<ArrayNumber;i++)
    {
        for(int j=0;j<length;j++)
        {
            cin >> AllTheArrays[i][j];
        }
    }
    int MergedSize=length*ArrayNumber;
    int MergedArray[MergedSize];
    //Merging all the rows into a single array
    int x=0,y=0;
    for(int i=0;i<MergedSize;i++)
    {
        MergedArray[i]=AllTheArrays[x][y];
        if(y==length)
        {
            y=0;
            x+=1;
        }
        y+=1;
    }
    //removing dupliactes
    for(int i=0;i<MergedSize;i++)
    {
        for(int j=i+1;j<MergedSize;)
		{
			if(MergedArray[i]==MergedArray[j])
			{
				for(int k=j;k<MergedSize-1;k++)
					MergedArray[k]=MergedArray[k+1];

				MergedSize--;
			}
			else
                ++j;
		}
    }
    for(int i=0;i<MergedSize;i++)
    {
        cout << MergedArray[i] << " ";

    }

    return 0;

}
