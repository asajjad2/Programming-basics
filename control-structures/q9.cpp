//Areeb Sajjad - 20I0904 - Assignment 2

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int num1, num2, win=0, warning=0,tempnum1,tempnum2,tempnum3,tempnum4,tempnum5,tempnum6,tempnum7,tempnum8;
    cout << "Please input 2 numbers within the range 1 to 36, inclusive\n";
    cin >> num1 >> num2;
    if (num1<1 || num1>36 || num2<1 || num2>36)
    {
                cout << "The number entered is not within the range, please try again.\n";
                warning++;
                if(warning>3)
                {
                    exit(0);
                }
                cin >> num1 >> num2;
                if (num1<1 || num1>36 || num2<1 || num2>36)
                {
                    cout << "The number entered is not within the range, please try again.\n";
                    warning++;
                    if(warning>3)
                    {
                        exit(0);
                    }
                    cin >> num1 >> num2;
                    if (num1<1 || num1>36 || num2<1 || num2>36)
                    {
                        cout << "The number entered is not within the range, please try again.\n";
                        warning++;
                        if(warning>3)
                        {
                            exit(0);
                        }
                        cin >> num1 >> num2;
                        if (num1<1 || num1>36 || num2<1 || num2>36)
                        {
                            cout << "The number entered is not within the range, please try again.\n";
                            warning++;
                            if(warning>3)
                            {
                                exit(0);
                            }
                        }
                    }

                }

    }
    else if(num1==num2)
    {
        cout << "The numbers cannot be the same\n";
        warning++;
        if(warning>3)
            exit(0);
    }
    else if((num1==1 || num1==6 || num1==7 || num1==12 || num1==17 || num1==20 || num1==28 || num1==33) && (num2==1 || num2==6 || num2==7 || num2==12 || num2==17 || num2==20 || num2==28 || num2==33))
    {
        cout << "Both numbers entered have colour green\n You win round 1\n";
        win++;
    }
    else if ((num1==2||num1==11||num1==13||num1==18||num1==19||num1==24||num1==29||num1==32)&&(num2==2||num2==11||num2==13||num2==18||num2==19||num2==24||num2==29||num2==32))
    {
        cout << "Both numbers entered have colour red\n You win round 1\n";
        win++;
    }
    else if((num1==3||num1==10||num1==14||num1==23||num1==25||num1==30||num1==31||num1==36)&&(num2==3||num2==10||num2==14||num2==23||num2==25||num2==30||num2==31||num2==36))
    {
        cout << "Both numbers entered have colour blue\n You win round 1\n";
        win++;
    }
    else if ((num1==4||num1==9||num1==15||num1==22||num1==26||num1==35)&&(num2==4||num2==9||num2==15||num2==22||num2==26||num2==35))
    {
        cout << "Both numbers entered have colour orange\n You win round 1\n";
        win++;
    }
    else if ((num1==5||num1==8||num1==16||num1==21||num1==27||num1==34)&&(num2==5||num2==8||num2==16||num2==21||num2==27||num2==34))
    {
        cout << "Both numbers entered have colour grey\n You win round 1\n";
        win++;
    }
    else
    {
        cout <<"You could not win round 1, better luck next time\n";
        win=win;
        num1=-1,num2=-3; //this is done so to ensure of the person loses round 1, its numbers are reusable
    }
    tempnum1=num1, tempnum2=num2;
	cout << "Please input 2 numbers within the range 1 to 36 for round 2, inclusive\n"; //Round2 Begins
   	cin >> num1 >> num2;
	if (num1<1 || num1>36 || num2<1 || num2>36)
    {
        cout << "The number entered is not within the range, please try again.\n";
                warning++;
                if(warning>3)
                {
                    exit(0);
                }
                cin >> num1 >> num2;
                if (num1<1 || num1>36 || num2<1 || num2>36)
                {
                    cout << "The number entered is not within the range, please try again.\n";
                    warning++;
                    if(warning>3)
                    {
                        exit(0);
                    }
                    cin >> num1 >> num2;
                    if (num1<1 || num1>36 || num2<1 || num2>36)
                    {
                        cout << "The number entered is not within the range, please try again.\n";
                        warning++;
                        if(warning>3)
                        {
                            exit(0);
                        }
                        cin >> num1 >> num2;
                        if (num1<1 || num1>36 || num2<1 || num2>36)
                        {
                            cout << "The number entered is not within the range, please try again.\n";
                            warning++;
                            if(warning>3)
                            {
                                exit(0);
                            }
                        }
                    }

                }
    }
	else if(num1==num2)
    {
        cout << "The numbers cannot be the same,input again.\n";
        warning++;
        if(warning>3)
            exit(0);

    }
	else if(num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2)
	{
        cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
        warning++;
        if(warning>3)
            exit(0);
            cin >> num1 >> num2;
                if (num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2)
                {
                    cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
                    warning++;
                    if(warning>3)
                    {
                        exit(0);
                    }
                    cin >> num1 >> num2;
                    if (num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2)
                    {
                        cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
                        warning++;
                        if(warning>3)
                        {
                            exit(0);
                        }
                        cin >> num1 >> num2;
                        if (num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2)
                        {
                            cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
                            warning++;
                            if(warning>3)
                            {
                                exit(0);
                            }
                        }
                    }

                }
	}
	else if((num1==1 || num1==6 || num1==7 || num1==12 || num1==17 || num1==20 || num1==28 || num1==33) && (num2==1 || num2==6 || num2==7 || num2==12 || num2==17 || num2==20 || num2==28 || num2==33))
    {
        cout << "Both numbers entered have colour green\n You win round 2\n";
        win++;
    }
	else if ((num1==2||num1==11||num1==13||num1==18||num1==19||num1==24||num1==29||num1==32)&&(num2==2||num2==11||num2==13||num2==18||num2==19||num2==24||num2==29||num2==32))
    {
        cout << "Both numbers entered have colour red\n You win round 2\n";
        win++;
    }
	else if((num1==3||num1==10||num1==14||num1==23||num1==25||num1==30||num1==31||num1==36)&&(num2==3||num2==10||num2==14||num2==23||num2==25||num2==30||num2==31||num2==36))
    {
        cout << "Both numbers entered have colour blue\n You win round 2\n";
        win++;
    }
	else if ((num1==4||num1==9||num1==15||num1==22||num1==26||num1==35)&&(num2==4||num2==9||num2==15||num2==22||num2==26||num2==35))
    {
        cout << "Both numbers entered have colour orange\n You win round 2\n";
        win++;
    }
	else if ((num1==5||num1==8||num1==16||num1==21||num1==27||num1==34)&&(num2==5||num2==8||num2==16||num2==21||num2==27||num2==34))
    {
        cout << "Both numbers entered have colour grey\n You win round 2\n";
        win++;
    }
	else
    {
        cout <<"You could not win round 2, better luck next time\n";
        win=win;
        num1=-1,num2=-3; //this is done so to ensure of the person loses round 1, its numbers are reusable
    }
    tempnum3=num1, tempnum4=num2;
	cout << "Please input 2 numbers within the range 1 to 36 for round 3, inclusive\n"; //Round3 Begins
   	cin >> num1 >> num2;
	if (num1<1 || num1>36 || num2<1 || num2>36)
    {
        cout << "The number entered is not within the range, please try again.\n";
                warning++;
                if(warning>3)
                {
                    exit(0);
                }
                cin >> num1 >> num2;
                if (num1<1 || num1>36 || num2<1 || num2>36)
                {
                    cout << "The number entered is not within the range, please try again.\n";
                    warning++;
                    if(warning>3)
                    {
                        exit(0);
                    }
                    cin >> num1 >> num2;
                    if (num1<1 || num1>36 || num2<1 || num2>36)
                    {
                        cout << "The number entered is not within the range, please try again.\n";
                        warning++;
                        if(warning>3)
                        {
                            exit(0);
                        }
                        cin >> num1 >> num2;
                        if (num1<1 || num1>36 || num2<1 || num2>36)
                        {
                            cout << "The number entered is not within the range, please try again.\n";
                            warning++;
                            if(warning>3)
                            {
                                exit(0);
                            }
                        }
                    }

                }
    }
	else if(num1==num2)
    {
        cout << "The numbers cannot be the same\n";
        warning++;
        if(warning>3)
            exit(0);
    }
	else if(num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2||num1==tempnum3||num2==tempnum3||num1==tempnum4||num2==tempnum4)
	{
       cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
        warning++;
        if(warning>3)
            exit(0);
            cin >> num1 >> num2;
                if (num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2||num1==tempnum3||num2==tempnum3||num1==tempnum4||num2==tempnum4)
                {
                    cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
                    warning++;
                    if(warning>3)
                    {
                        exit(0);
                    }
                    cin >> num1 >> num2;
                    if (num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2||num1==tempnum3||num2==tempnum3||num1==tempnum4||num2==tempnum4)
                    {
                        cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
                        warning++;
                        if(warning>3)
                        {
                            exit(0);
                        }
                        cin >> num1 >> num2;
                        if (num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2||num1==tempnum3||num2==tempnum3||num1==tempnum4||num2==tempnum4)
                        {
                            cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
                            warning++;
                            if(warning>3)
                            {
                                exit(0);
                            }
                        }
                    }

                }
	}
	else if((num1==1 || num1==6 || num1==7 || num1==12 || num1==17 || num1==20 || num1==28 || num1==33) && (num2==1 || num2==6 || num2==7 || num2==12 || num2==17 || num2==20 || num2==28 || num2==33))
    {
        cout << "Both numbers entered have colour green\n You win round 3\n";
        win++;
    }
	else if ((num1==2||num1==11||num1==13||num1==18||num1==19||num1==24||num1==29||num1==32)&&(num2==2||num2==11||num2==13||num2==18||num2==19||num2==24||num2==29||num2==32))
    {
        cout << "Both numbers entered have colour red\n You win round 3\n";
        win++;
    }
	else if((num1==3||num1==10||num1==14||num1==23||num1==25||num1==30||num1==31||num1==36)&&(num2==3||num2==10||num2==14||num2==23||num2==25||num2==30||num2==31||num2==36))
    {
        cout << "Both numbers entered have colour blue\n You win round 3\n";
        win++;
    }
	else if ((num1==4||num1==9||num1==15||num1==22||num1==26||num1==35)&&(num2==4||num2==9||num2==15||num2==22||num2==26||num2==35))
    {
        cout << "Both numbers entered have colour orange\n You win round 3\n";
        win++;
    }
	else if ((num1==5||num1==8||num1==16||num1==21||num1==27||num1==34)&&(num2==5||num2==8||num2==16||num2==21||num2==27||num2==34))
    {
        cout << "Both numbers entered have colour grey\n You win round 3\n";
        win++;
    }
	else
    {
        cout <<"You could not win round 3, better luck next time\n";
        win=win;
        num1=-1,num2=-3; //this is done so to ensure of the person loses round 1, its numbers are reusable
    }
    tempnum5=num1, tempnum6=num2;
    if (win==3)
    {
        cout << "Congratulations! You won the game\n";
        exit(0);
    }
    else if (win==0)
    {
        cout << "You've lost the game\n";
        exit(0);
    }

	cout << "Please input 2 numbers within the range 1 to 36 for round 4, inclusive\n"; //Round4 Begins
   	cin >> num1 >> num2;

	if (num1<1 || num1>36 || num2<1 || num2>36)
    {
        cout << "The number entered is not within the range, please try again.\n";
                warning++;
                if(warning>3)
                {
                    exit(0);
                }
                cin >> num1 >> num2;
                if (num1<1 || num1>36 || num2<1 || num2>36)
                {
                    cout << "The number entered is not within the range, please try again.\n";
                    warning++;
                    if(warning>3)
                    {
                        exit(0);
                    }
                    cin >> num1 >> num2;
                    if (num1<1 || num1>36 || num2<1 || num2>36)
                    {
                        cout << "The number entered is not within the range, please try again.\n";
                        warning++;
                        if(warning>3)
                        {
                            exit(0);
                        }
                        cin >> num1 >> num2;
                        if (num1<1 || num1>36 || num2<1 || num2>36)
                        {
                            cout << "The number entered is not within the range, please try again.\n";
                            warning++;
                            if(warning>3)
                            {
                                exit(0);
                            }
                        }
                    }

                }
    }
	else if(num1==num2)
    {
        cout << "The numbers cannot be the same\n";
        warning++;
        if(warning>3)
            exit(0);
    }
	else if(num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2||num1==tempnum3||num2==tempnum3||num1==tempnum4||num2==tempnum4||num1==tempnum5||num2==tempnum5||num1==tempnum6||num2==tempnum6)
	{
        cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
        warning++;
        if(warning>3)
            exit(0);
            cin >> num1 >> num2;
                if (num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2||num1==tempnum3||num2==tempnum3||num1==tempnum4||num2==tempnum4||num1==tempnum5||num2==tempnum5||num1==tempnum6||num2==tempnum6)
                {
                    cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
                    warning++;
                    if(warning>3)
                    {
                        exit(0);
                    }
                    cin >> num1 >> num2;
                    if (num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2||num1==tempnum3||num2==tempnum3||num1==tempnum4||num2==tempnum4||num1==tempnum5||num2==tempnum5||num1==tempnum6||num2==tempnum6)
                    {
                        cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
                        warning++;
                        if(warning>3)
                        {
                            exit(0);
                        }
                        cin >> num1 >> num2;
                        if (num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2||num1==tempnum3||num2==tempnum3||num1==tempnum4||num2==tempnum4||num1==tempnum5||num2==tempnum5||num1==tempnum6||num2==tempnum6)
                        {
                            cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
                            warning++;
                            if(warning>3)
                            {
                                exit(0);
                            }
                        }
                    }

                }
	}
	else if((num1==1 || num1==6 || num1==7 || num1==12 || num1==17 || num1==20 || num1==28 || num1==33) && (num2==1 || num2==6 || num2==7 || num2==12 || num2==17 || num2==20 || num2==28 || num2==33))
    {
        cout << "Both numbers entered have colour green\n You win round 4\n";
        win++;
    }
	else if ((num1==2||num1==11||num1==13||num1==18||num1==19||num1==24||num1==29||num1==32)&&(num2==2||num2==11||num2==13||num2==18||num2==19||num2==24||num2==29||num2==32))
    {
        cout << "Both numbers entered have colour red\n You win round 4\n";
        win++;
    }
	else if((num1==3||num1==10||num1==14||num1==23||num1==25||num1==30||num1==31||num1==36)&&(num2==3||num2==10||num2==14||num2==23||num2==25||num2==30||num2==31||num2==36))
    {
        cout << "Both numbers entered have colour blue\n You win round 4\n";
        win++;
    }
	else if ((num1==4||num1==9||num1==15||num1==22||num1==26||num1==35)&&(num2==4||num2==9||num2==15||num2==22||num2==26||num2==35))
    {
        cout << "Both numbers entered have colour orange\n You win round 4\n";
        win++;
    }
	else if ((num1==5||num1==8||num1==16||num1==21||num1==27||num1==34)&&(num2==5||num2==8||num2==16||num2==21||num2==27||num2==34))
    {
        cout << "Both numbers entered have colour grey\n You win round 4\n";
        win++;
    }
	else
    {
        cout <<"You could not win round 4, better luck next time\n";
        win=win;
        num1=-1,num2=-3; //this is done so to ensure of the person loses round 1, its numbers are reusable
    }

    tempnum7=num1, tempnum8=num2;
	cout << "Please input 2 numbers within the range 1 to 36 for round 5, inclusive\n"; //Round5 Begins
   	cin >> num1 >> num2;
	if (num1<1 || num1>36 || num2<1 || num2>36)
    {
        cout << "The number entered is not within the range, please try again.\n";
                warning++;
                if(warning>3)
                {
                    exit(0);
                }
                cin >> num1 >> num2;
                if (num1<1 || num1>36 || num2<1 || num2>36)
                {
                    cout << "The number entered is not within the range, please try again.\n";
                    warning++;
                    if(warning>3)
                    {
                        exit(0);
                    }
                    cin >> num1 >> num2;
                    if (num1<1 || num1>36 || num2<1 || num2>36)
                    {
                        cout << "The number entered is not within the range, please try again.\n";
                        warning++;
                        if(warning>3)
                        {
                            exit(0);
                        }
                        cin >> num1 >> num2;
                        if (num1<1 || num1>36 || num2<1 || num2>36)
                        {
                            cout << "The number entered is not within the range, please try again.\n";
                            warning++;
                            if(warning>3)
                            {
                                exit(0);
                            }
                        }
                    }

                }
    }
	else if(num1==num2)
    {
        cout << "The numbers cannot be the same\n";
        warning++;
        if(warning>3)
            exit(0);
    }
	else if(num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2||num1==tempnum3||num2==tempnum3||num1==tempnum4||num2==tempnum4||num1==tempnum5||num2==tempnum5||num1==tempnum6||num2==tempnum6||num1==tempnum7||num2==tempnum7||num1==tempnum8||num2==tempnum8)
	{
        cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
        warning++;
        if(warning>3)
            exit(0);
            cin >> num1 >> num2;
                if (num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2||num1==tempnum3||num2==tempnum3||num1==tempnum4||num2==tempnum4||num1==tempnum5||num2==tempnum5||num1==tempnum6||num2==tempnum6||num1==tempnum7||num2==tempnum7||num1==tempnum8||num2==tempnum8)
                {
                    cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
                    warning++;
                    if(warning>3)
                    {
                        exit(0);
                    }
                    cin >> num1 >> num2;
                    if (num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2||num1==tempnum3||num2==tempnum3||num1==tempnum4||num2==tempnum4||num1==tempnum5||num2==tempnum5||num1==tempnum6||num2==tempnum6||num1==tempnum7||num2==tempnum7||num1==tempnum8||num2==tempnum8)
                    {
                        cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
                        warning++;
                        if(warning>3)
                        {
                            exit(0);
                        }
                        cin >> num1 >> num2;
                        if (num1==tempnum1||num2==tempnum1||num1==tempnum2||num2==tempnum2||num1==tempnum3||num2==tempnum3||num1==tempnum4||num2==tempnum4||num1==tempnum5||num2==tempnum5||num1==tempnum6||num2==tempnum6||num1==tempnum7||num2==tempnum7||num1==tempnum8||num2==tempnum8)
                        {
                            cout << "Warning:You cannot reuse the numbers used to win the last round!, please input the numbers again\n";
                            warning++;
                            if(warning>3)
                            {
                                exit(0);
                            }
                        }
                    }

                }
	}
	else if((num1==1 || num1==6 || num1==7 || num1==12 || num1==17 || num1==20 || num1==28 || num1==33) && (num2==1 || num2==6 || num2==7 || num2==12 || num2==17 || num2==20 || num2==28 || num2==33))
    {
        cout << "Both numbers entered have colour green\n You win round 5\n";
        win++;
    }
	else if ((num1==2||num1==11||num1==13||num1==18||num1==19||num1==24||num1==29||num1==32)&&(num2==2||num2==11||num2==13||num2==18||num2==19||num2==24||num2==29||num2==32))
    {
        cout << "Both numbers entered have colour red\n You win round 5\n";
        win++;
    }
	else if((num1==3||num1==10||num1==14||num1==23||num1==25||num1==30||num1==31||num1==36)&&(num2==3||num2==10||num2==14||num2==23||num2==25||num2==30||num2==31||num2==36))
    {
        cout << "Both numbers entered have colour blue\n You win round 5\n";
        win++;
    }
	else if ((num1==4||num1==9||num1==15||num1==22||num1==26||num1==35)&&(num2==4||num2==9||num2==15||num2==22||num2==26||num2==35))
    {
        cout << "Both numbers entered have colour orange\n You win round 5\n";
        win++;
    }
	else if ((num1==5||num1==8||num1==16||num1==21||num1==27||num1==34)&&(num2==5||num2==8||num2==16||num2==21||num2==27||num2==34))
    {
        cout << "Both numbers entered have colour grey\n You win round 5\n";
        win++;
    }
	else
    {
        cout <<"You could not win round 5, better luck next time\n";
        win=win;
        num1=-1,num2=-3; //this is done so to ensure of the person loses round 1, its numbers are reusable
    }
    if (win>=3)
        cout << "Congratulations! You won the game\n";
    else
        cout << "Tough Luck! You lost the game!\n";




    return 0;
}
