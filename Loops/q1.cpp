//AreebSajjad - I200904 - Assignment_3 

#include <iostream>


using namespace std;

void PrintTables(int num)

{
    
	int a,b,c,d,temp_a;
    
	d = num%10; //getting the unit digit
    
	num/= 10;
    
	c = num%10; //getting the tens digit
    
	num/=10;
    
	b = num%10; //getting the hundredth digit
    
	num/=10;
    
	a = num%10; //getting the thousandth digit
    
	cout << "Table1\t\tTable2\n";
    
	while (a<=b) //loop to print the tables
    
	{
        
		cout << c << "*" << a << "=" << c*a << "\t\t" << d << "*" << a << "=" << d*a << endl;
        
		a++;
    
	}	

}


int main()

{
    
	int x;
    
	cout<<"Please input a 4 digit number\n";
    
	cin >> x;
    
	PrintTables(x);
    

    
	return 0;

}
