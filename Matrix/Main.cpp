#include "Closure.cpp"

int prompt();
vector<vector<int> > inputVector();
vector<vector<int> > resizeVector(vector< vector<int> >);

void closureMenu(vector< vector<int> >);


int main()
{
	int i = 0;
	vector< vector<int> > matrix;
	prompt();
	matrix = inputVector();
	matrix = resizeVector(matrix);
	print(matrix);
	
	closureMenu(matrix);
}

int prompt()
{
	cout << "Enter a matrix" << endl;
	cout << "use ',' in between each element (no spaces)" << endl;
	cout << "Press enter key to start a new row" << endl;
	cout << "Type 'x' or 'X' on new row to end matrix entry" << endl;
	cout << "M_r =\t";
}

vector< vector<int> > inputVector()
{
	vector< vector<int> > m;
	vector<int> row;
	string tempRow;
	int i;
	int j = 0;
	bool cont = true;
	
	while(cont == true)
	{
		cin >> tempRow;
		cout << "\t";
		
		for (i = 0; i < tempRow.length(); i++)
		{
			if (tempRow[i] == '0')
			{
				row.push_back(0);
			}
			else if (tempRow[i] == '1')
			{
				row.push_back(1);
			}
			else if (tempRow[i] == ','){}
			else if (tempRow[i] == 'x' || tempRow[i] == 'X')
			{
				cont = false;
			}
			else
			{
				cout << endl << "Invalid Entry";
				exit(0);
			}
		}
		m.push_back(row);
		row.clear();
	}
	return (m);
}

vector< vector<int> > resizeVector(vector< vector<int> > m)
{	
	int i;
	
	while (m.size() != m[0].size())
	{
		if (m.size() < m[0].size())
		{
			for (i = 0; i < m[i].size(); i++)
			{
				m[i].pop_back();
			}
		}
		else if (m.size() > m[0].size())
		{
			m.pop_back();
		}
	}
	
	return (m);
}

void print(vector< vector<int> > m)
{
	int i,j;
	
	cout << endl << "You defined your matrix as:";
	cout << endl << "M_r =";
	for (i = 0; i < m.size(); i++)
	{
		cout << "\t";
		for(j = 0; j < m[i].size(); j++)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}


