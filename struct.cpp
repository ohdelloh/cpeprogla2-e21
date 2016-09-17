//rivera
#include <iostream>
#include <iomanip>
using namespace std;
void studrec();
struct sturec
{
int id,q1,q2,q3;
int r;
char n[100];	
};
int main()
{
	sturec s;
	cout << "STUDENT RECORD \n";
	cout << "ID:";
	cin >> s.id;
	cin.ignore();
	cout << "Name: ";
	cin.getline(s.n,100);
	cout << "Quiz 1: ";
	cin >> s.q1;
	cout << "Quiz 2: ";
	cin >> s.q2;
	cout << "Quiz 3: ";
	cin >> s.q3;
	cout << "\n";
	s.r=(s.q1 + s.q2 + s.q3);
	cout << "\n\n";
	cout << "Student Record " << endl;
	cout << "ID:" <<s.id << endl;
	cout << "Name:" << s.n << endl;
	cout << "Grades:" <<  s.r/3 << setprecision(3) << endl;
	if (s.r<70)
	{
		cout << "Remarks: Failed" << endl;
	}
	else
	cout << "Remarks: Passed" << endl;
}


