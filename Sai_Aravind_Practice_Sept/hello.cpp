/* hello */

#include<iostream>
using namespace std;

namespace ns1
{
	const double pi=3.14;
int value()
{
	return 5;
}
}

namespace ns2
{

const double pi=3.1416;

double value()
{
	return 2*pi;
}
}

int main()
{
	cout << ns1::value()<<'\n';
	cout<<ns1::pi<<'\n';
	cout<<ns2::value()<<'\n';
	cout<<ns2::pi<<'\n';
	return 0;
}
