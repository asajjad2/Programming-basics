//Areeb Sajjad 20i0904 Assignment4
#include <iostream>
#include<cmath>
#include<cctype>
using namespace std;
WordCounter(char ch[],int x)
{   
    int NumWords=1;
    for (int i=0 ; i<=x ; i++)
    {
        if(ch[i]==32)
            NumWords++;
    }
    cout << "There are " << NumWords << " words\n";
}
PalindromeCheck(char ch[],int x)
{
    int yes;
    for(int i=0 , j=x-1; i<x && j!=0 ; )
    {
    
        if(ch[i++]==ch[j--])
        {
            yes=1;
        }
        else 
        {
            yes=0;
            break;
        }
    }
    if(yes==1)
        cout<< "Palindrome\n";
    else if(yes==0)
        cout << "Not palindrome\n";
}
LowerCase(char ch[],int x)
{
    for (int i=0;i<=x;i++)
    {
        ch[i]=tolower(ch[i]);
    }
    
    for (int i=0 ; i<=n ; i++)
        cout << ch[i];
}
UpperCase(Char ch[],int x)
{
    for (int i=0;i<=x;i++)
    {
        ch[i]=toupper(ch[i]);
    }
    
    for (int i=0 ; i<=n ; i++)
        cout << ch[i];
}
int main()
{
    char characters[500];
    char ch;
    int counter=0;
    cout << "Please input the characters\nNote: character limit is 500, including spaces\nPress tab when done!\n";
    
    for (int i=0 ; i<500 ; i++)
    {
        cin.get(ch);
        while((ch<'A'||ch<'Z')&&(ch<'a'||ch>'z')&&ch!=11)
        {
            cout << "Make sure you you only enter alphabets and spaces\n";
            cin.get(ch);
        }
        if(input==11)
            break;
            
        arr[i]==ch;
        counter++;
    }
    int choice;
    cout << "Menu:\n";
    cout << "1. Length Calculator\n2. Word Counter\3. Palindrome check\n4.Lowercase convert\n5. Uppercase convert\n";
    cout << "Input corresponding number";
    cin >> choice;
    switch(choice)
    {
        case 1:
            cout << "The string entered is " << counter << " long\n"
            break;
        case 2:
            WordCounter(characters, counter);
            break;
        case 3:
            PalindromeCheck(characters, counter);
            break;
        case 4:
            LowerCase(characters, counter);
            break;
        case 5:
            UpperCase(characters, counter);
            break;
        default:
            cout << "Invalid option\n";
            break;
        
    }
}
