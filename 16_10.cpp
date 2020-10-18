#include<iostream>
using namespace std;
int main()
{
void swap (int,int);		//swap is there in std
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	cout<<"\nBefore Swapping: ";
	cout<<a<<"\t"<<b<<"\n";
	::swap(a,b);     // :: for using the global one
	cout<<"\nAfter Swapping"<< "\n";
	cout<<a<<"\t"<<b<<"\n";
	return 0;	
}

void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nInside Swap function\t";
	cout<<a<<"\t"<<b<<"\n";
}
