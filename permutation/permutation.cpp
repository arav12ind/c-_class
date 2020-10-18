#include"permutation.h"

int permutation(int a,int b)
{
	if(a<0||b>a)
		return 0;
	return fact(a)/fact(a-b);
}
