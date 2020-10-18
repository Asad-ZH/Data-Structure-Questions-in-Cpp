#include <iostream>

using namespace std;

int main()
{

	int mangoes[20], oranges[20], bananas[20], total = 0, counter = 0; 		//variable and array declaration and intialization
	char n = 'y';

	for (int i = 0; i < 20 && n != 'n' && n != 'N'; i++)
	{
		//taking input
		cout << "Enter number of mangoes: ";
		cin >> mangoes[i];

		cout << "Enter number of oranges: ";
		cin >> oranges[i];

		cout << "Enter number of bananas: ";
		cin >> bananas[i];

		counter++;

		cout << "\nAdd another Customer item(y/n)";
		cin >> n;		//asking user wheter to continue the program or not

		//Applying validtion 
		for (; n != 'n' && n != 'N' && n != 'y' && n != 'Y';)
		{
			cout << "Invalid";
			cout << "\nAdd another Factorial(y/n)";
			cin >> n;
			cout << endl;
		}
	}
	cout << "\n**********************************************************************************";
	cout << "\nCustomer No.\t|Mangoes|\t|Oranges|\t|Bananas|\t|Total Bill|";
	cout << "\n**********************************************************************************\n";
	for (int i = 0; i < counter; i++)
	{
		cout << " " << i + 1 << "\t\t  ";
		cout << mangoes[i] << "\t\t  ";
		cout << oranges[i] << "\t\t  ";
		cout << bananas[i] << "\t\t  ";
		cout << (mangoes[i] * 20) + (oranges[i] * 10) + (bananas[i] * 5) << endl;
	}

	return 0;
}
