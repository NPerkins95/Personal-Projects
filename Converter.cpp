#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

char printMenu();
int bin2dec();
int dec2bin();
int bin2hex();
int hex2bin();
int dec2hex();
int hex2dec();
int split();

int main()
{
	char choice = '0';
	
	while (choice != 'x' && choice != 'X')
	{
		choice = printMenu();
		switch(choice)
		{
			case '1':
				bin2dec();
				break;
			case '2':
				dec2bin();
				break;
			case '3':
				bin2hex();
				break;
			case '4':
				hex2bin();
				break;
			case '5':
				dec2hex();
				break;
			case '6':
				hex2dec();
				break;
		}
	}
}

char printMenu()
{
	char ch = '0';
	cout << endl;
	cout << "1: Binary to Decimal" << endl;
	cout << "2: Decimal to Binary" << endl;
	cout << "3: Binary to Hexidecimal" << endl;
	cout << "4: Hexidecimal to Binary" << endl;
	cout << "5: Decimal to Hexidecimal" << endl;
	cout << "6: Hexidecimal to Decimal" << endl;
	cout << "X: Exit" << endl;
	cout << endl << "Please enter choice: ";
	cin >> ch;
	return (ch);
}

int bin2dec()
{
	int bin, temp, i;
	int dec = 0;
	vector<int> split;
	
	cout << endl << "Binary to Decimal Converter" << endl;
	cout << "Binary:  ";
	cin >> bin;
	
	for(i=0; i<8; i++)
	{
		temp = bin / pow(10,7 - i);
		
		if(temp==1)
		{
			split.push_back(1);
			bin -= pow(10, 7 - i);
		}
		else if(temp==0)
		{
			split.push_back(0);
		}
		else
		{
			cout << endl << "NOT BINARY" << endl;
			i = 10;
		}
		
		if (i!=10)
		{
			dec += (split.at(i) * pow(2,7 - i));
		}
	}
	
	if(i<10)
	{
		cout << "Decimal: " << dec << endl << endl;	
	}
} 

int dec2bin()
{
	int dec, rem, i, size;
	vector<int> split;
	
	cout << endl << "Decimal to Binary Converter" << endl;
	cout << "Decimal: ";
	cin >> dec;
	
	cout << "Binary:  ";
	while(dec != 0)
	{
		rem = dec % 2;
		
		if(rem == 1)
		{
			split.push_back(1);
		}
		else
		{
			split.push_back(0);
		}
		dec /= 2;
	}
	
	size = split.size();
	
	for(i=1; i<=size; i++)
	{
		cout << split.at(size - i);
	}
	
	cout << endl << endl;
}

int bin2hex()
{
	int bin, temp;
	int i = 10;
	vector<int> split;
	
	while (i>=10)
	{
		cout << endl << "Binary to Hex Converter" << endl;
		cout << "Binary: ";
		cin >> bin;
	
		for(i=0; i<8; i++)
		{
			temp = bin / pow(10,7 - i);
			
			if(temp==1)
			{
				split.push_back(1);
				bin -= pow(10, 7 - i);
			}
			else if(temp==0)
			{
				split.push_back(0);
			}
			else
			{
				cout << endl << "NOT BINARY" << endl;
				i = 10;
			}/////////ENDED HERE
		}
	}
	
	
	
	cout << "Hex:   ";
	switch(split)
	{
		case 0000:
			cout << "0";
			break;
		case 0001:
			cout << "1";
			break;
		case 0010:
			cout << "2";
			break;
		case 0011:
			cout << "3";
			break;
		case 0100:
			cout << "4";
			break;
		case 0101:
			cout << "5";
			break;
		case 0110:
			cout << "6";
			break;
		case 0111:
			cout << "7";
			break;
		case 1000:
			cout << "8";
			break;
		case 1001:
			cout << "9";
			break;
		case 1010:
			cout << "A";
			break;
		case 1011:
			cout << "B";
			break;
		case 1100:
			cout << "C";
			break;
		case 1101:
			cout << "D";
			break;
		case 1110:
			cout << "E";
			break;
		case 1111:
			cout << "F";
			break;
	}
	cout << endl;
}

int hex2bin()
{
	cout << endl << "Hex to Binary Converter" << endl;
	cout << "Hexidecimal: ";
}

int dec2hex()
{
	cout << endl << "Decimal to Hex Converter" << endl;
	cout << "Decimal: ";
}

int hex2dec()
{
	cout << endl << "Hex to Deciaml Converter" << endl;
	cout << "Hexidecimal:\t";
}

/*int split(int bin)
{
	int i, temp;
	vector<int> split;
	
	for(i=0; i<8; i++)
	{
		temp = bin / pow(10,7 - i);
		
		if(temp==1)
		{
			split.push_back(1);
			bin -= pow(10, 7 - i);
			return(split)
		}
		else if(temp==0)
		{
			split.push_back(0);
		}
	}
}*/
