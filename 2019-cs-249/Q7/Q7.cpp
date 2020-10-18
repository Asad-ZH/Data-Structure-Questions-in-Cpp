#include <iostream>

using namespace std;

int main()
{

	int numbers[5], squares[5], cubes[5], sums[5], total = 0;	//variable declaration

	//assiging values
	for (int i = 0; i < 5; i++)
	{
		numbers[i] = i;
		squares[i] = i * i;
		cubes[i] = i * i * i;
		sums[i] = numbers[i] + squares[i] + cubes[i];
		total += numbers[i] + squares[i] + cubes[i];
	}
	
	//printing result
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (i == 0)
			{
				if (j == 0)
				{
					cout << "Numbers: ";
				}
				cout << numbers[j] << "     ";	//printing numbers
			}
			if (i == 1)
			{
				if (j == 0)
				{
					cout << "Squares: ";
				}
				cout << squares[j] << "     ";	//printing squares
			}
			if (i == 2)
			{
				if (j == 0)
				{
					cout << "Cubes:   ";
				}
				cout << cubes[j] << "     ";	//printing cubes
			}
			if (i == 3)
			{
				if (j == 0)
				{
					cout << "Sums:    ";
				}
				cout << sums[j] << "     ";		//printing sums
			}
		}
		cout << endl;
	}
	cout << "Grand Total: " << total;	//printing grand total
	return 0;
}
