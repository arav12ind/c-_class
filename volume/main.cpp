#include"volume.h"

int main(int ac,char **ar)
{
	if(ac!=4)
	{
		cout<<"\nrequires 4 floats as commandline arguments\n";
		return -1;
	}
 float a=atof(ar[1]),b=atof(ar[2]),c=atof(ar[3]);
	cout<<"cube volume("<<a<<")"<<"\t\t"<<volume(a)<<endl;
	cout<<"cylinder volume("<<a<<","<<b<<")"<<"\t"<<volume(a,b)<<endl;
	cout<<"box volume("<<a<<","<<b<<","<<c<<")"<<"\t"<<volume(a,b,c)<<endl;
}
