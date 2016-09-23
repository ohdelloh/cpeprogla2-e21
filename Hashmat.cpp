#include <iostream>
#include <cmath>
using namespace std;
int S[3],q,w;
 
int main()
{
cout << "Enter soldiers: " << endl;
 for(int x=0; x<3; x++)
 {
	cin >> q >> w;
 	S[x]=abs(q-w);
 }
 cout << "\n";
 cout << S[0] << endl <<S[1]<< endl << S[2] << endl;
}
