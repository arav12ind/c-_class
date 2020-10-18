#include"permutation.h"

int main(int ac,char **ar)
{
	if(ac!=3)
	{
		cout<<"\nUsage:\tpermutaion n k\n";
		return -1;
	}
	int c=permutation(atoi(ar[1]),atoi(ar[2]));
	if(c==0)
	{
		cout<<"\nInvalid input!!!\n";
		return -2;
	}
	cout<<"\n"<<c<<endl;
	return 0;
}
