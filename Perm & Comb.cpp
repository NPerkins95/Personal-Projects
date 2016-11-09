#include <iostream>
using namespace std;

int main()
{
	char choice;
	bool more = true;
	double n, r, ans, top, bot1, bot2;
	
	do{
		cout << "C(n,r) or P(n,r)\t(C or P)" << endl;
		cin >> choice;
		
		ans = 1;
		top = 1;
		bot1 = 1;
		bot2 = 1;
		
		if(choice == 'c' || choice == 'C')
		{
			cout << "\n\nC(n,r)"<< endl;
			cout << "n:";
			cin >> n;
			cout << "r:";
			cin >> r;
			
			for(int i=0; i < n; i++)
			{
				top *= (n - i);
			}
			for(int i=0; i < r; i++)
			{
				bot1 *= (r - i);
			}
			for(int i=0; i < (n - r); i++)
			{
				bot2 *= ((n - r) - i);
			}
			
			ans = top / (bot1 * bot2);
			
			
			cout << "C(" << n << "," << r << ") = " << ans;
		}
		else if(choice == 'p' || choice == 'P')
		{
			cout << "\n\nP(n,r)" << endl;
			cout << "n:";
			cin >> n;
			cout << "r:";
			cin >> r;
			
			for(int i=0; i < n; i++)
			{
				top *= (n - i);
			}
			for(int i=0; i < (n - r); i++)
			{
				bot1 *= ((n - r) - i);
			}
			
			ans = top / bot1;
			
			cout << "P(" << n << "," << r << ") = " << ans;
		}
		else
		{
			break;
		}
		cout << "\n\n";
	} while(more = true);
}
