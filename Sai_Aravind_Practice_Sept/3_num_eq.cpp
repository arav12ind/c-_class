#include<iostream>

using namespace std;

int main()
{
	int a,b,c;
	cout<<"Enter three numbers: ";
	cin>>a>>b>>c;

	cout<<(a==b?(b==c?"a=b=c":(b>c?"(a=b)>c":"(a=b)<c")):(a>b?(b==c?"a>(b=c)":(b>c?"a>b>c":(a==c?"(a=c)>b":(c>a?"c>a>b":"a>c>b")))):(b==c?"a<(b=c)":(b>c?(a>c?"b>a>c":"b>c>a"):"c>b>a"))))<<endl;
	return 0;
}
