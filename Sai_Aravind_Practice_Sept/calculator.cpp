#include<iostream>
#include<cmath>
using namespace std;

void calculator(int a, int b, int c)
{
	switch(c)
	{
		case '+':
		{
			cout<<"The sum is: "<<a+b<<endl;
			break;
		}
		case '-':
		{
			cout<<"The difference is: "<<a-b<<endl;
			break;
		}
		case '*':
		{
			cout<<"The product is: "<<a*b<<endl;
			break;
		}
		case '/':
		{
			cout<<"The quotient is: "<<a/b<<endl;
			break;
		}
		case '%':
		{
			cout<<"The remainder upon division is: "<<a%b<<endl;
			break;
		}
		default:
		cout<<"Not a pre-defined operator!"<<endl;
	}
}

int count()
{
	char d[1000];
	int vowel=0,consonant=0,digi=0;
	cout<<"Enter anything on the keyboard: ";
	getchar();
	cin.getline(d,1000);

	for (int i=0;i<cin.gcount();i++)
	{
		char c=d[i];
		if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
			vowel++;
		else if(isdigit(c))
			digi++;
		else if(isalpha(c))
			consonant++;
	}
	cout<<"The number of vowels: "<<vowel<<endl;
	cout<<"The number of consonants: "<<consonant<<endl;
	cout<<"The number of digits: "<<digi<<endl;
	return 0;
}

int count_advanced()
{
	char d[1000];
	int upper=0,lower=0,digi=0,white=0,punct=0;
	cout<<"Enter anything on the keyboard: ";
	getchar();
	cin.getline(d,1000);
	
	for (int i=0;i<cin.gcount();i++)
	{
		char c=d[i];
		if(isupper(c))
			upper++;
		else if(islower(c))
			lower++;
		if(isdigit(c))
			digi++;
		if(isspace(c))
			white++;
		else if(ispunct(c))
			punct++;
	}
	cout<<"The number of uppercase characters entered: "<<upper<<endl;
	cout<<"The number of lowercase characters entered: "<<lower<<endl;
	cout<<"The number of digits: "<<digi<<endl;
	cout<<"The number of whitespace characters entered: "<<white<<endl;
	cout<<"The number of punctuation characters: "<<punct<<endl;
	return 0;
}

int main()
{
	int a;
	while(a)
	{
	cout<<"Enter program number (1-3) (0 to exit): ";
	cin>>a;
	switch(a)
	{
		case 1:
		{
			count_advanced();
			break;
		}
		case 2:
		{
			int c,d;
			char e;
			cout<<"Enter two numbers: ";
			cin>>c>>d;
			cout<<"Enter the operation to be performed on them: ";
			cin>>e;
			calculator(c,d,e);
			break;
		}
		case 3:
		{
			count();
			break;
		}
		default:
		{
		cout<<"Enter a valid program number!!!"<<endl;
		continue;
		}
	}
}
	return 0;
}
