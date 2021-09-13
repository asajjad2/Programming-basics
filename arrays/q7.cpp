//Areeb Sajjad 20I-0904 Assignment4
#include <iostream>


using namespace std;
void TotalScore(int mainarray[100][100],int students,int subjects)
{
    int ID,sum=0;
    cout << "Input ID of student whose total marks you need\n";
    cin >> ID;
    for(int i=0;i<students;i++)
    {
        for(int j=0;j<subjects;j++)
        {
            if(mainarray[i][j]==ID)
            {
               for(int k=1;k<subjects+1;k++)
                    sum+=mainarray[i][j+k];
            }
        }
    }
    cout << "The total score of " << ID << " is " << sum << endl;
}
void Average(int mainarray[100][100],int students,int subjects)
{
    int SubjectNum,SumClass=0,avg;
    cout << "Please input the subject number whose average you want\n";
    cin >> SubjectNum;
    for(int i=0;i<students;i++)
    {
        for(int j=0;j<subjects;j++)
        {
            if(j==SubjectNum)
            {
                for(int k=0;k<students;k++)
                {
                    SumClass+=mainarray[k][SubjectNum];
                }
            }
        }
    }
    cout << SumClass;
    avg=SumClass/students;
    cout << "The average for subject number " << SubjectNum << " is " << avg << endl;
}
Highest(int mainarray[100][100],int students,int subjects)
{
    int ID, highest;
    cout << "Input ID of student whose highest marks needed\n";
    cin >> ID;
    for(int i=0;i<students;i++)
    {
        for(int j=0;j<subjects;j++)
        {
            if(mainarray[i][j]==ID)
            {
               for(int k=1;k<subjects+1;k++)
               {
                   if(mainarray[i][j+1]<mainarray[i][j+k])
                    highest=mainarray[i][j+k];
               }


            }
        }
    }
    cout << "ID number : " << ID << " Highest marks: " << highest << endl;
}
Lowest(int mainarray[100][100],int students,int subjects)
{
    int ID, lowest;
    cout << "Input ID of student whose lowest marks needed\n";
    cin >> ID;
    for(int i=0;i<students;i++)
    {
        for(int j=0;j<subjects;j++)
        {
            if(mainarray[i][j]==ID)
            {
               for(int k=1;k<subjects+1;k++)
               {
                   if(mainarray[i][j+1]>mainarray[i][j+k])
                    lowest=mainarray[i][j+k];
               }


            }
        }
    }
    cout << "ID number : " << ID << " lowest marks: " << lowest << endl;
}
int main()
{
    int students,subjects,choice;
    cout << "Input students and subjects\n";
    cin >> students>> subjects;
    int mainarray[100][100];
    cout << "Please input student IDs and scores for each student\n";
    for (int i=0;i<students;i++)
    {
        for(int j=0;j<subjects+1;j++)
        {
            cin >> mainarray[i][j];
        }
    }
    cout << "Menu displayed below:\n";
    cout << "1.TotalScore\n2.SubjectAverage\n3.Highest Marks student\n4.Lowest marks student\n";
    cout << "Input choice\n";
    cin >> choice;
    switch(choice)
    {
    case 1:
        TotalScore(mainarray,students,subjects);
        break;
    case 2:
        Average(mainarray,students,subjects);
        break;
    case 3:
        Highest(mainarray,students,subjects);
        break;
    case 4:
        Lowest(mainarray,students,subjects);
        break;
    default:
        cout << "Invalid\n";
        break;
    }
    return 0;

}
