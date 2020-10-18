#include <iostream>

using namespace std;

// printing the summation of two values
void Sum(float a, float b, float c, float d)
{
	float fNum, fDen;
	cout << "\nADDITION";
	fNum = ((a * d) + (b * c));
	fDen = b * d;
	cout << "\nAmswer: " << fNum << "/" << fDen;
}

// printing the subtraction of two values
void Sub(float a, float b, float c, float d)
{
	float fNum, fDen;
	cout << "\nSUBTRACTION";
	fNum = ((a * d) - (b * c));
	fDen = b * d;
	cout << "\nAmswer: " << fNum << "/" << fDen;
}

// printing the multiplication of two values
void Mul(float a, float b, float c, float d)
{
	float fNum, fDen;
	cout << "\nMULTIPLICATION";
	fNum = (a * c);
	fDen = b * d;
	cout << "\nAmswer: " << fNum << "/" << fDen;
}

// printing the division of two values
void Div(float a, float b, float c, float d)
{
	float fNum, fDen;
	cout << "\nDIVISION";
	fNum = (a * d);
	fDen = b * c;
	cout << "\nAmswer: " << fNum << "/" << fDen;
}
int main()
{
	//variable declaration
	float a, b, c, d;
	char op;
jump:
	cout << "FirstNumber:-\n";
	cout << "Numerator = ";
	cin >> a;
	cout << "Denominator = ";
	cin >> b;

	cout << "FirstNumber:-\n";
	cout << "Numerator = ";
	cin >> c;
	cout << "Denominator = ";
	cin >> d;

	if (b == 0 || d == 0)
	{
		cout << "Invalid input\nPLease Enter Again\n";
		goto jump;
	}

	cout << "\n enter the operator";
	cin >> op;

	switch (op)
	{
	case '+':

		Sum(a, b, c, d);
		break;

	case '-':

		Sub(a, b, c, d);
		break;

	case '*':

		Mul(a, b, c, d);
		break;

	case '/':

		Div(a, b, c, d);
		break;
	}

	return 0;
}
