//Recursive program created for the assisting in explanation of a math problem.
//Finds the sum of the parimeters of squares, where the next square in the sequence
//    is inside the previous square. Each next square is rotated so its corners meet
//    with the middle of the previous square's sidelength.
//Shows the value that the side lengths of the squares are approaching.

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
