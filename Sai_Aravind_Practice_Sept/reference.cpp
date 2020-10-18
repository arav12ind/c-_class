#include<iostream>
using namespace std;

//reference variable
//it provides an alias for the previously defined variable

int main()
{
	int total=100;
	//int &sum=total;
	int sum=total;
	cout<< "Total: "<<total << '\t'<< sum<< endl;
	
	total=total+50;
	
	cout<< "Total: "<<total << '\t'<< sum<< endl;
	
	sum=500;

	cout<< "Total: "<<total << '\t'<< sum<< endl;
	sum=0;

	cout<< "Total: "<<total << '\t'<< sum<< endl;
	return 0;
}
