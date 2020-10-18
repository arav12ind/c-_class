#include<stdio.h>


int digsum(int x)
{
	int i,sum=0;
	while(x>0)
	{
		i=x%10;
		x=x/10;
		sum+=i;
	}
	return sum;
}


void main()
{
	printf("\nEnter an integer : ");
	int n;
	scanf("%d",&n);
	printf("\nThe digit sum is %d\n",digsum(n));
}
