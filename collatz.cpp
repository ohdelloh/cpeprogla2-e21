#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int m,n,highest=1,greatest=1,i,cn,mi;
int main()
{
	ifstream f("input.txt");
	while(f>>m>>n)
	{
		cn=n;
		for(i=m; i<n; i++)
		{
			mi=i;
			highest=1;
			while(mi>1)
			{
				if ((mi%2)==0)
				{
					mi=(mi/2);
					highest++;
				}
				else if ((mi%2)!=0)
				{
					mi=((3*mi)+1);
				}
			}
			if (highest>highest)
			{
				greatest=highest;
			}
		}
		cout << m << " " << n << "  " << greatest << endl;
	}
	return 0;
}
