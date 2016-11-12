#include <iostream>
#include <vector>
using namespace std;

void reflex(vector< vector<int> >);
void symmet(vector< vector<int> >);
void trans(vector< vector<int> >);
void print(vector< vector<int> >);

void closureMenu(vector< vector<int> > m)
{
	char choice;

	cout << "Select which closure operation to perform" << endl;
	cout << "[1] Reflexive closure" << endl;
	cout << "[2] Symmetric closure" << endl;
	cout << "[3] Transitive closure" << endl;
	cin >> choice;
	
	switch(choice)
	{
		case '1':
			reflex(m);
			break;
		case '2':
			symmet(m);
			break;
		case '3':
			trans(m);
			break;
	}
	
}

void reflex(vector< vector<int> > m)
{
	int i;
	
	for (i = 0; i < m.size(); i++)
	{
		if (m[i][i] != 1)
		{
			m[i][i] = 1;
		}
	}
	print(m);
}

void symmet(vector< vector<int> > m)
{
	int i,j;
	
	for (i = 0; i < m.size(); i++)
	{
		for (j = 0; j < m.size(); j++)
		{
			if (m[i][j] != m[j][i])
			{
				if (m[i][j] == 1)
				{
					m[j][i] = 1;
				}
				else if (m[j][i] == 1)
				{
					m[i][j] = 1;
				}
			}
		}
	}
	print(m);
}

void trans(vector< vector<int> > m)
{
	int i,j,k;
	
	for (i = 0; i < m.size(); i++)
	{
		for (j = 0; j < m.size(); j++)
		{
			if (m[i][j] == 1)
			{
				for(k = 0; k < m.size(); k++)
				{
					if(m[j][k] == 1)
					{
						if (m[i][k] != 1)
						{
							m[i][k] = 1;
						}
					}
				}
			}
		}
	}
	print(m);
}
