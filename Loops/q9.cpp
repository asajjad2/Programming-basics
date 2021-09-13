//AreebSajjad - I200904 - Assignment_3
#include <iostream>
#include <string>
#include<cstdlib>
using namespace std;
int main()
{
    int vowelcounter=0,a_counter=0,e_counter=0,i_counter=0,o_counter=0,u_counter=0;
    char sentence='Y';
    cout << "Please input the sentence character by character\n";
    cout << "Note: if you enter Capital n i.e. '0', the program terminates!\n";
    while(sentence!='0')
    {

        cin >> sentence; // characters entered individually
        while((sentence<'A'||sentence>'Z')&&(sentence<'a'||sentence>'z')&&(sentence!='0')) //INPUT VALIDATION
        {
            cout << "Error, input a correct character\n";
            cin >> sentence;
        }
        if (sentence=='a'||sentence=='A') //Individual upper and lowercases checked
        {
            a_counter++;
            vowelcounter++; //Total Vowels checked
        }
        else if(sentence=='e'||sentence=='E') //Individual upper and lowercases checked
        {
            e_counter++;
            vowelcounter++; //Total Vowels checked
        }
        else if(sentence=='i'||sentence=='I') //Individual upper and lowercases checked
        {
            i_counter++;
            vowelcounter++; //Total Vowels checked
        }
        else if(sentence=='o'||sentence=='O') //Individual upper and lowercases checked
        {
            o_counter++;
            vowelcounter++; //Total Vowels checked
        }
        else if (sentence=='u'||sentence=='U') //Individual upper and lowercases checked
        {
            u_counter++;
            vowelcounter++; //Total Vowels checked
        }

    }
    cout << "Total Vowels entered: " << vowelcounter << endl;
    cout << "Total a's entered:" << a_counter << endl;
    cout << "Total e's entered:" << e_counter << endl;
    cout << "Total i's entered:" << i_counter << endl;
    cout << "Total o's entered:" << o_counter << endl;
    cout << "Total u's entered:" << u_counter << endl;
    return 0;
}



