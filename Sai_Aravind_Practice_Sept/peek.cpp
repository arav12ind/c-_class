#include<iostream>
#include<string>
using namespace std;
int main()
{
	int sum=0,i;
	char x;
	while((x=cin.peek())!='\n')
	{
		if(isdigit(x))
		{
			cin>>i;
			sum+=i;
		}
		else
			cin.get();
	}
	cout<<"\n\n The sum of integers in input is "<<sum<<"\n\n";
	return 0;
}
