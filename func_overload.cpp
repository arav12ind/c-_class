#include<iostream>
using namespace std;
inline float max(int a,int b)
{
	return a>b?a:b;
}

inline float max(float a,float b)
{
	return a>b?a:b;
}

inline int max(int a,int b,int c)
{
	return (a=max(a,b))>c?a:c;
}
int main()
{
	int a,b,c;
	cout<<"\nEnter 3 numbers : ";
	cin>>a>>b>>c;
	cout<<"\nThe max 1, 2 : "<<max(a,b)<<"\nThe max 2,3 : "<<max(b,c)<<"\nThe max : "<<max(a,b,c)<<"\n";
	float x,y;
	cout<<"\nEnter two floats: ";
	cin>>x>>y;
	cout<<"\nThe max is "<<max(x,y)<<"\n";
	return 0;
}
