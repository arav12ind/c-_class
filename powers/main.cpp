#include"powers.h"
int main(int ac,char **ar)
{
	if(ac!=3)
	{
		cout<<"\nUsage:\n\tpowers base last_power\n";
		return -1;
	}
	powers(atoi(ar[1]),atoi(ar[2]));
	return 0;
}
