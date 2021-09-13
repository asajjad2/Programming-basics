//Areeb Sajjad 20i0904 Assignment4
#include <iostream>
#include<cmath>
using namespace std;
void Count(int array1[],int x)
{
    int counter=0, number;
    cout << "Input number you'd like to check\n";
    cin >> number;
    for (int i=0;i<x;i++)
    {
        if(array1[i]==number)
        {
            counter++;
        }
    }
    cout << "Occurs " << counter << " times\n";
}

void NextXOR(int array1[],int x)
{
    int counter=0;
    for(int i=0;i<x-2;i++)
    {
        if(array1[i]==((array1[i+1]^array1[i+2])))
        {
            counter++;
        }
    }
    cout << "Total numbers which were equal to the XOR of the next 2 consecutive numbers are: " << counter << endl;

}
void Duplicates(int array1[],int x)
{
    int counter=0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            if(array1[i]==array1[j])
                counter++;
        }
        cout << "The frequency of " << array1[i] << " is " << counter << endl;
        counter=0;
    }
}
void Circular(int array1[], int x)
{
    int NewArray[x];
    for(int i=0;i<x;i++)
    {
        if(i+1==x)
            NewArray[i]=array1[0]+array1[1];
        else if(i+1==x-1)
            NewArray[i]=array1[0]+array1[x-1];
        else
        NewArray[i]=array1[i+1]+array1[i+2];
    }
    for(int j=0;j<x;j++)
        cout << NewArray[j] << endl;
}
void Search(int array1[], int x)
{
    int number=0 ,index;

    cout << "Please input the number you want to search\n";
    cin >> number;

    for(int i=0;i<x;i++)
    {
        if(array1[i]==number)
            index=i;
    }

    if(index!=0)
        cout << "The position of the number entered is at " << index << endl;
    else
        cout << "The position is negative" << endl;
}
void circular_Shift(int array1[], int x)
{
    int RotatedArray[x];
    for(int i=0;i<x;i++)
    {
        RotatedArray[(i+2)%x]=array1[i];
    }
    for(int j=0;j<x;j++)
        cout << RotatedArray[j]<< endl;
}
int main()
{
    int x, choice;

	cout << "Please input Array Size\n";
    cin >> x;
    while(x<=0) //input validation
    {
        cout << "Array size cannot be less than 1. Input again!\n";
        cin >> x;
    }
	int ArrayMain[x];

	cout << "Please input Array elements\n";
	for (int i=0;i<x;i++)
		cin >> ArrayMain[i];

	cout << "The menu is displayed below:\n";
	cout << "1. Count\n2. Next XOR\n3. Duplicates\n4. Cicular\n5. Search\n6. Shift Circular\n";
	cout << "Please input the corresponding number of the operation you would like to perform\n";
	cin >> choice;
	switch(choice)
	{
	    case 1:
	        Count(ArrayMain, x);
	        break;
	    case 2:
	        NextXOR(ArrayMain, x);
	        break;
	    case 3:
	        Duplicates(ArrayMain, x);
	        break;
	    case 4:
	        Circular(ArrayMain, x);
	        break;
	    case 5:
	        Search(ArrayMain, x);
	        break;
	    case 6:
	        circular_Shift(ArrayMain, x);
	        break;
	    default:
	        cout << "Invalid\n";
	        break;

	}
    return 0;
}
