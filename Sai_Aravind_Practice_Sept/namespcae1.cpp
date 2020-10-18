#include<iostream>
using namespace std;

namespace first
{
	int x=5;
	int y=10;
}

namespace second
{
	double x=3.1416;
	double y=2.7138;
}

int main()
{

	{
		using namespace first;
		cout<<x<<'\n'<<y<<'\n';
	}
//when putting the comment in the first block, the value
//of the variables gets destroyed and both the namespaces are available for the variables which leads to ambiguity in the assignment of the variables

	{
		using namespace second;
		cout<<x<<'\n'<<y<<'\n';
	}
	return 0;
}
