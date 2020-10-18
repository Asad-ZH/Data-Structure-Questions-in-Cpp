#include <iostream>

using namespace std;

void counter()
{
	static int x = 0;	//static variable function
	x++;
	cout << x << endl;
}

int main()
{
	cout << "Static variable:-\n";
	
	for (int i = 0; i < 5; i++)		//calling the function multiple time
	{
		counter();
	}

	return 0;
}
