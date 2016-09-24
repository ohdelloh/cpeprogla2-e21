#include<iostream>
#include<string.h>
using namespace std;
char str1[100], str2[200], word[100], yesno;
int n, flag, chooser,result,i,l;
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
int choose(int chooser);
char again(char yesno);

void problem1() {
	cin.ignore();
	cout << "Enter first word: ";
	gets(str1);
	cout << "Enter second word: ";
	gets(str2);
	  //strcpy(str1,"Hello");
 	  //strcpy(str2,"Hello");
  result = strcmp(str1, str2);
  if(result==1)
  {
  cout <<"positive";
  }
  else if (result==-1)
  {
	cout << "negative";
  }
  else
  	cout << "equal";
}

void problem2() {
	cout << "Enter first word: ";
    cin >> str1;
    cout << "Enter second word: ";
    cin >> str2;
    cout << "New string value for str1: ";
    cout << strcpy(str1,str2);
}

void problem3() {
	cin.ignore();
	cout << "Enter first word (str1) : ";
	gets(str1);
	cout << "Enter second word (str2): ";
	gets(str2);
	cout << "New string value for str1: ";
	cout << strcat(str1,str2);
}

void problem4() {
	cin.ignore();
	cout << "Enter a string: ";
    gets(str1);
    l = strlen(str1);
    strlwr(str1);
    for(i=0; i<l; i++){
        if(str1[i] != str1[l-i-1]){
            flag = 1;
            break;
	   }
	}
    if (flag) {
        cout << str1 << " is not a palindrome" << endl; 
    }    
    else {
        cout << str1 << " is a palindrome" << endl; 
    }
}

void problem5() {
  cin.ignore();
  cout << "Enter some string: ";
  gets (str1);
  strlwr(str1);
  str1[0]-=32;
  for(int i= 0; i<strlen(str1); i++)
  {
  	if (i==0)	
  	if(str1[i] >= 97 && str1[i] <=122)
  	str1[i]-=32;
  	if(str1[i]== ' ')
  	str1[i+1]-=32;
  }
  puts(str1);
}

void problem6() {
	cout<<"\n*******************************\nREVERSE VERTICAL ORDER\n********************************\n";
	cin.ignore();
	cout<<"Enter a phrase: ";
	gets(word);
	n=strlen(word);
	for(int i=n;i>=0;i--) {
		if (word[i]==32) {
			int j=i+1;
			while(word[j]!=32&&j<n) {
				cout<<word[j];
				j++;
			}
			cout<<endl;
		}
	}
	int k=0;
	while(word[k]!=32) {
		cout<<word[k];
		k++;
	}
}

int choose(int chooser) {
	cout<<"Choose a problem [1-6]... ";
	cin>>chooser;
	switch(chooser) {
		case 1:
			problem1();
			again(yesno);
			break;
		case 2:
			problem2();
			again(yesno);
			break;
		case 3:
			problem3();
			again(yesno);
			break;
		case 4:
			problem4();
			again(yesno);
			break;
		case 5:
			problem5();
			again(yesno);
			break;
		case 6:
			problem6();
			again(yesno);
			break;
		default:
			break;
	}
	return chooser;
}

char again(char yesno) {
	cout<<"\n*******************************\nSolve another problem??? [y/n] ";
	cin>>yesno;
	if (yesno=='y') {
		system("cls");
		choose(chooser);
	}
	else if (yesno=='n') {
		cout<<"Thanks for using this program :)\n";
	}
	else {
		again(yesno);
	}
	return yesno;
}

main() {
	choose(chooser);
}
