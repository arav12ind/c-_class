#include"powers.h"

void powers(int a, int b)
{
	cout<<endl;
	for(int i=0,j=1;i<=b;++i,j*=a)
		cout<<a<<"^"<<i<<"\t"<<j<<endl;
}
