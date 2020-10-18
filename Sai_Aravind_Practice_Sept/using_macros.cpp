#include<iostream>
using namespace std;

#define SUM(a,b) (a+b)

int sum(int a, int b)
{
	int c;
	c=a+b;
	return c;
}

int main()
{
	int x,y,z,p;
	cin>>x>>y;
	z=SUM(x,y);
	p=sum(x,y);
	cout<<z<<" "<<p<<endl;
	return 0;
}
