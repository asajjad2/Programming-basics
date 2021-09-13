//AreebSajjad - I200904 - Assignment_3
#include <iostream>
#include <string>
using namespace std;
bool Palindrome_Number(int num)
{
    int a,reverse=0,temp_num;
    bool check;
    temp_num=num;
    while(num!=0)
    {
        a=num%10;
        reverse = (reverse*10)+a;
        num/=10;
    }
    if(temp_num==reverse)
    check = true;
    else
    check = false;

    return check;
}
bool Prime_Number(int num)
{
    int factor=1,Totalprimes=0;
    bool check;
    while(factor<=num)
    {
        if(num%factor==0)
            Totalprimes++;
        factor++;
    }
    if(Totalprimes>2)
        check = false;
    else
        check = true;
    return check;
}
int Digit_Counter (int num)
{
    int digits=0;
    while(num>0)
    {
        num/=10;
        digits++;
    }
    return digits;
}
int Digit_Sum(int num)
{
    int sum=0;
    while(num>0)
    {
        sum+=num%10;
        num/=10;
    }
    return sum;
}
int Even_Digits(int num)
{
    int evendigits=0,digit;
    while(num>0)
    {
        digit=num%10;
        if((digit%2)==0)
            evendigits++;
        num/=10;
    }
    return evendigits;
}
int Sum_Even_Digits(int num)
{

    int sum=0,digit;
    while(num>0)
    {
            digit=num%10;
            if((digit%2)==0)
                sum+=digit;
            num/=10;
    }
    return sum;
}
int Odd_Digits(int num)
{
    int odddigits=0,digit;
    while(num>0)
    {
        digit=num%10;
        if((digit%2)==1)
            odddigits++;
        num/=10;
    }
    return odddigits;
}
int Sum_Odd_Digits(int num)
{
    int sum=0,digit;
    while(num>0)
    {
        digit=num%10;
        if((digit%2)==1)
            sum+=digit;
        num/=10;
    }
    return sum;
}
int Max_Digit(int num)
{
    int Max=0,digit;
    while(num>0)
    {
        digit=num%10;
        if(Max<digit)
            Max=digit;
        num/=10;
    }
    return Max;
}
int Min_Digit(int num)
{
    int digit;
    int Min=num%10;
    while(num>0)
    {
        digit=num%10;
        if(Min>digit)
            Min=digit;
        num/=10;
    }
    return Min;
}
int main()
{
    int x,digits,DigitSum,EvenDigitCount,EvenDigitSum,OddDigitCount,OddDigitSum,MaxDigit,MinDigit;
    bool palindrome,prime;
    cout<<"Please input a number\n";
    cin >> x;
    palindrome=Palindrome_Number(x);
    if(palindrome)
        cout << "The number entered is a palindrome number\n";
    else
        cout << "The number entered is not a palindrome number\n";
    prime=Prime_Number(x);
    if(prime)
        cout<< "The number entered is a prime number\n";
    else
        cout<< "The number entered is not a prime number\n";
    digits=Digit_Counter(x);
    cout << "The number of digits in the number entered are " << digits << endl;
    DigitSum=Digit_Sum(x);
    cout << "The sum of digits on the number you entered is " << DigitSum <<endl;
    EvenDigitCount=Even_Digits(x);
    cout << "There are " << EvenDigitCount << " even digits in the number entered\n";
    EvenDigitSum=Sum_Even_Digits(x);
    cout << "The sum of even digits in your number is " << EvenDigitSum << endl;
    OddDigitCount=Odd_Digits(x);
    cout << "There are " << OddDigitCount << " odd digits in the number entered\n";
    OddDigitSum=Sum_Odd_Digits(x);
    cout << "The sum of odd digits in your number is " << OddDigitSum << endl;
    MaxDigit=Max_Digit(x);
    cout << "The largest digit in the number entered is " << MaxDigit << endl;
    MinDigit=Min_Digit(x);
    cout << "The smallest digit in the number entered is " << MinDigit << endl;

    return 0;
}
