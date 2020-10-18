#include <iostream>

using namespace std;

int main()
{
	char n = 'y';

	while (n != 'n' && n != 'N')
	{
		//variable declaration
		int input, f = 1;

		//taking inputs
		cout << "Enter Any Number : ";
		cin >> input;

		for (int i = 1; i <= input; i++)	//calculating factorial
		{
			f *= i;
		}

		cout << "Factorial: " << f;		//printing factorial

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
