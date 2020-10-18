#include<iostream>
using namespace std;

#define SQUARE(x) ( (x) * (x) )

int main()
{
	int a,b;
	cin>>a;

	b=SQUARE(a);		//a=4
	cout<<a<<" "<<b<<endl;
	//b=SQUARE(++a); //(++4) * (++(++4))=5 * 6 = 30
	cout<<a<<" "<<b<<endl;
	b=SQUARE(a++); //(4++) * ((4++)++)=4 * 5 = 20
	cout<<a<<" "<<b<<endl;

	return 0;
}

