#include<iostream>
using namespace std;

int m=10;

int main()
{
	int m=20;
	{
		int k=m;
		int m=30;

		cout<<"Inner Block"<<endl;
		cout <<"K= "<<k<<endl;
		cout <<"M= "<<m<<endl;
		cout<< "::M= "<<::m<<endl;
	}
	cout<< "Outer Block"<< endl;
	cout<< "M= "<<m<< endl;
	cout<< "::M= "<<::m <<endl;
	//cout << "K= "<<k<< endl;
	return 0;
}
