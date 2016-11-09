#include <iostream>
#include <math.h>
using namespace std;

double sideLength(double);

int main()
{
	int x, sqNum, i;
	double sum, side, temp;

	cout << "Enter side length: ";
	cin >> x;
	cout << "Enter number of squares: ";
	cin >> sqNum;
	
	sum = 4*x;
	side = sideLength(x);
	cout << "Square Length of " << i+1 << ": " << side << endl;
	
	for(i=0; i < sqNum; i++)
	{
		cout << "Square Length of " << i+2 << ": " << side << endl;
		side = sideLength(side);
		sum += (4*side);
	}
	
	cout << "Sum of P: " << sum << endl;
}

double sideLength(double y)
{
	return 2*sqrt(y);
}
