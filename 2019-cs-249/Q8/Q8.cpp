#include <iostream>

using namespace std;

int main()
{

	int array[10], input, temp = 999;	//variable declaration and intialization
	
	cout<<"Enter values:-\n";
	for (int i = 0; i < 10; i++)
	{
		cin >> array[i];	// Taking inputs
	}

	cout << "Enter the number: ";	//taking value to search and find the index of that value
	cin >> input;
	
	//finding value in array
	for (int i = 0; i < 10; i++)
	{
		if (array[i] == input)
		{
			temp = i;
		}
	}
	
	//checking and printing the value
	if (temp == 999)
	{
		cout << "\nnumber not found";
	}
	else
	{
		cout << "\nIndex: " << temp;
	}

	return 0;
}
