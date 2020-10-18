#include <iostream>

using namespace std;

int main()
{

	int arr[10], input, index, temp1, temp2;	//variable and array declaration

	cout<<"Enter the values:-\n";
	
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	
	cout << "\nEnter the value: ";
	cin >> input;

	cout << "Enter the index: ";
	cin >> index;

	for (int i = 9; i >= index; i--)
	{
		if (i == 9)
		{
		}
		else
		{
			arr[i + 1] = arr[i];
		}
	}
	arr[index] = input;

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << "  ";
	}
	
	return 0;
}
