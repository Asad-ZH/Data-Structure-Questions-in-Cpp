#include <iostream>

using namespace std;

int main()
{
	char n = 'y';

	for (; n != 'n' && n != 'N';)
	{
		int quotient, remainder, dividend, divisor; //variable declaration

		//taking inputs
		cout << "Enter Two Numbers:-\n";
		cout << "dividend = ";
		cin >> dividend;
		cout << "divisor = ";
		cin >> divisor;
		
		//calculating quotient and remainder
		quotient = dividend / divisor;
		remainder = dividend % divisor;

		cout << "Quotient: " << quotient;
		cout << "\nRemainder: " << remainder;

		cout << "\nAdd another Factorial(y/n)";
		cin >> n;	//asking user wheter to continue the program or not

		//Applying validtion
		for (; n != 'n' && n != 'N' && n != 'y' && n != 'Y';)
		{
			cout << "Invalid";
			cout << "\nAdd another Factorial(y/n)";
			cin >> n;
			cout << endl;
		}
	}
	return 0;
}
