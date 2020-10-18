#include<iostream>

using namespace std;

int main()
{
	int sum=0,int_;
	char x;
	while((x=getchar())!='\n')
	{
		if(isdigit(x))
		{
			for(int_=x-'0';isdigit(x=getchar())&&x!='\n';int_=int_*10+x-'0');
			sum+=int_;
			if(x=='\n')
				break;
		}
	}
	cout<<"\n"<<sum<<"\n";
	return 0;
}
