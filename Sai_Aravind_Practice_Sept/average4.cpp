#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int sum=0,n,i;

	for(i=0; cin>>n; i++)
		sum=sum+n;
	float average=sum/i;
	cout<<"Average: "<<average<<endl<<"Sum: "<<sum<<endl;
	return 0;
}
