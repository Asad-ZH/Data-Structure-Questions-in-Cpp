#include <iostream>

using namespace std;

float calculate(float n1, float n2, char op)
{
	//deciding the operation and printing the result
	switch (op)	
	{
	case '+':

		cout << "\nADDITION";
		cout << "\n" << n1 + n2;
		break;

	case '-':

		cout << "\nSUBTRACTION";
		cout << "\n" << n1 - n2;
		break;

	case '*':

		cout << "\nMULTIPLICATION";
		cout << "\n" << n1 * n2;
		break;

	case '/':

		cout << "\nDIVISION";
		cout << "\n" << n1 / n2;
		break;
	}
}
int main()
{
	float n1, n2, ans;		//variable declaration
	char op;

	//taking input
	cout << "enter first operand = ";
	cin >> n1;
	cout << "\n enter second operand = ";
	cin >> n2;
	cout << "\n enter the operator";
	cin >> op;

	calculate(n1, n2, op);	//calling user-defind function
}
