#include <iostream>

using namespace std;

float Area(float b, float h)	// funtion for calcultaing the area
{
	float ar = 0.5 * (b * h);
	return ar;
}

int main()
{
	float h, b;		//variable declaration

	//TAKING INPUT
	cout << "Enter the base: ";
	cin >> b;
	cout << "Enter the height:  ";
	cin >> h;
	
	cout << "\n The Area of the triangle: " << Area(b, h);	//printing the result by calling the function

	return 0;
}

