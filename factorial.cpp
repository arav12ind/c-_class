#include<iostream>
using namespace std;

int fact(int);

int main()
{
	int n;
	cout<<"\nEnter a positive number : ";
	cin>> n;
	for(int i=0;i<=n;++i)
	cout<<"\n The factorial of " <<i <<" is "<<fact(i)<<"\n";
	return 0;
}
