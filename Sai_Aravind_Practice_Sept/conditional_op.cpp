#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	
	int a=10,b=20,c=30;

	(c>b>a)? cout<<"TRUE \n" : cout<< "FALSE \n";
	(c>b<a)? cout<<"TRUE \n" : cout<< "FALSE \n";

	cout<<endl<<"Finding the largest of two numbers using conditional operator"<<endl;


	cout<<"Enter two numbers: ";
	cin>>a>>b;
//	large=(a>b?a:b);
	cout<<"The larger number is: "<<(a>b?a:b)<<endl;

	return 0;
}
