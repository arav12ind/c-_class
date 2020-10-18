#include<iostream>
using namespace std;
int max (int a,int b)
{
	return a;
}
int max(int a,int b)
{
	return b;
}


int main()
{
	cout<<"\n\n"<<max(2,3)<<"\n\n";
	return 0;
}
