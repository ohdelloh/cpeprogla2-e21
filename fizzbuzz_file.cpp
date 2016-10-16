#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream f("input.txt");
	
	int i;
	FILE *fp;
	fp=fopen("input.txt","r");
	
	if(!fp)
	{
		cout << "FILE NOT FOUND! " << endl;
		system("pause");
		exit(1);
		
	}
	
	while(f>>i)
	{
	if (i%3!=0&&i%5==0)
		cout << "BUZZ" << endl;
	else if (i%5!=0&&i%3==0)
		cout << "FIZZ" << endl;
	else if (i%3==0&&i%5==0)
		cout << "FIZZ BUZZ" << endl;
	else 
	cout << "\n" << i << endl;
	}
}
