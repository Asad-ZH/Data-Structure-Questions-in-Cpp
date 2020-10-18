#include <iostream>

using namespace std;

int main()
{

	int hardDisks[10], BackupHD[10], index;		//variable and array declaration

	cout << "Enter The values:-";
	for (int i = 0; i < 10; i++)
	{
		cin >> hardDisks[i];
		BackupHD[i] = hardDisks[i];
	}
	for (int i = 0; i < 10; i++)
	{
		cout << hardDisks[i] << "  ";
	}

	cout << "\nEnter the index of corrupted hard disk: ";
	cin >> index;
	hardDisks[index] = -1;

	cout << "Hard disk after corrupted: ";
	for (int i = 0; i < 10; i++)
	{
		cout << hardDisks[i] << "  ";
	}

	hardDisks[index] = BackupHD[index];

	cout << "\nHard disk after recovery: ";

	for (int i = 0; i < 10; i++)
	{
		cout << hardDisks[i] << "  ";
	}
	return 0;
}
