#include<iostream>
#include<string>
using namespace std;

template< class T >
T maximum(T a,T b, T c)
{
	T max=a;
	if(b>max)
		max=b;
	if(c>max)
		max=c;
	return c;
}

int main()
{
	int a,b,c;
	cout<<"\nEnter 3 integers: ";
	cin>>a>>b>>c;
	cout<<"\nThe largest is "<<maximum(a,b,c)<<"\n";
	double p,q,r;
	cout<<"\nEnter 3 floats: ";
	cin>>p>>q>>r;
	cout<<"\nThe largest is "<<maximum(p,q,r)<<"\n";
	char x,y,z;
	cout<<"\nEnter 3 chars: ";
	cin>>x>>y>>z;
	cout<<"\nThe largest is "<<maximum(x,y,z)<<"\n";
	string u,v,w;
	cout<<"\nEnter 3 strings: \n";
	cin>>u>>v>>w;
	cout<<"\nThe largest is "<<maximum(u,v,w)<<"\n";
}
