#include <iostream>
#include <cmath>

using namespace std;

// User-Defined Function for Area
double Area(double s, double a, double b, double c)
{
	// if(condition) user enter the wrong input
	if (a < 0 || b < 0 || c < 0 || a + b <= c || a + c <= b || c + b <= a)
	{
		cout << "\nInvalid";
		exit(0);
	}
	//returning the area
	return sqrt(s * (s - a) * (s - b) * (s - c));
}
// just adding some space 

int main()
{
	
	double a, b, c, s; //variable declaration

	//taking inputs
	cout << "Enter three vertices:-\n";
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "c = ";
	cin >> c;

	s = (a + b + c) / 2; // finding the value of s

	//printing result
	cout << "\nThe Area of Triangle is : " << Area(s, a, b, c);

	return 0;
}
