#include <iostream>

using namespace std;

int main()
{
	//variable intializtion
	int input = 5, temp = 1;

	//calculating and printing the pascal triangle
	for (int i = 0; i < input; i++)
	{
		for (int j = 1; j < input - i; j++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == 0)
			{
				temp = 1;
			}
			else
			{
				temp = temp * (i - j + 1) / j;
			}
			cout << temp << "   ";
		}
		cout << endl;
	}

	return 0;
}
