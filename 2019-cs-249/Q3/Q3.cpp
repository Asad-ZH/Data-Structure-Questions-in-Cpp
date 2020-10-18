#include <iostream>

using namespace std;

void Greater(int a, int b)
{
	//Applying condition of finding greater amoung two values
	if (a > b)
	{
		cout << "Greater value: " << a << endl;
	}
	else if (b > a)
	{
		cout << "Greater value: " << b << endl;
	}
	else
	{
		cout << "Both the values are equal\n";
	}
}

int main()
{
	//variable declaration
	int num1, num2, NumOfTrees;
	float length, radius, space, totalSpace;

	//taking inputs
	cout << "Enter Two Numbers:-\n";
	cout << "value 1 = ";
	cin >> num1;
	cout << "value 2 = ";
	cin >> num2;

	Greater(num1, num2);	//calling User-Defined function
	
	//Taking inputs of part (a)
	cout << "Enter the Radius: ";
	cin >> radius;
	cout << "Enter the length of Yard: ";
	cin >> length;
	cout << "Enter the space between fully grown tree: ";
	cin >> space;
	
	//Applying Formulas
	NumOfTrees = (length * length) / (radius * radius * 3.1416 + space);
	totalSpace = (radius * radius * 3.1416) * space;

	//printing results
	cout << "the number of trees that can be planted in the yard: " << NumOfTrees;
	cout << "\nthe total space that will be occupied by the fully-grown tree: " << totalSpace;

	return 0;
}
