#include <iostream>

using namespace std;

int main()
{
	//variable declaration
	int input, temp = 0;

	//taking inputs
	cout << "Enter Any Number : ";
	cin >> input;

	for (int i = 2; i <= input; i++)	//Applying condition for finding prime number
	{
		if (input % i == 0)
		{
			temp++;
		}
	}

	if (temp == 1 || input == 1)
	{
		cout << "The number you entered is a Prime number.";
	}
	else
	{
		cout << "The number you entered is not a Prime number.";
	}

	if (input % 2 == 0)		//finding even and odd number
	{
		cout << "\nThe number you entered is an Even number.";
	}
	else
	{
		cout << "\nThe number you entered is an Odd number.";
	}

	return 0;
}
