#include<iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
	ifstream f("input.txt");
	int num,sum=0;
	int hashmat,opponent;
	FILE  *fp;
    fp = fopen("input.txt","r");

    if(!fp)
	{
            cout << "Cannot open file" << endl;
            system("pause");
            exit(1);        
    }
    while(f>>num);
   
    for(int i=0; i<num; i++)
    {
    	if (i%3==0||i%5==0)
    	sum+=i;
	}
	cout << sum;
}
