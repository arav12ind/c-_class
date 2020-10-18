#include<iostream>
#include<iomanip>
using namespace std;
//program to show multiple manupulators
int main()
{
	int num;

	cout<<"Enter a number: ";
	cin>>num;
	cout <<"Number: "<<num<<endl;

	//hex manupulator
	cout <<"Hexadecimal Equivalent: "<<hex<<num<<endl;

	//showbase operator
	cout<<showbase<<num<<endl;

	//uppercase operator
	cout<<"With uppercase: "<<uppercase<<num<<endl;

	//oct & noshowbase manupulator
	cout<<"Ocatal Equivalent: "<<noshowbase<<oct<<num<<endl;

	//dec manupulator
	int h=0xf;
	cout<<"Decimal Equivalent of 'f': "<<dec<<h<<endl;
	int o=020;
	cout<<"Decimal Equivalent of '020' is: "<<o<<endl;


	int n1,n2;

	cout<<"Showing the use of boolalpha manupulator:"<<endl<<"Enter two numbers: ";
	cin>>n1>>n2;

	cout <<(n1<n2)<<endl;
	cout <<(n1>n2)<<endl;
	cout <<(n1==n2)<<endl;
	
	//boolalpha manupulator
	cout <<boolalpha;
	cout <<(n1<n2)<<endl;
	cout <<(n1>n2)<<endl;
	cout <<(n1==n2)<<endl;

	cout<<noboolalpha;
	cout <<(n1<n2)<<endl;
	cout <<(n1>n2)<<endl;
	cout <<(n1==n2)<<endl;
	
	//and manupulators like showpoint, scientific, noshowpoint	int m=1008,n=108, p=18;
	
	cout<<"Showing the use of setw manupulator"<<endl;

	int m=1008,n=108, p=18;
	
	cout<<"M= "<<m<<endl;
	cout<<"N= "<<n<<endl;
	cout<<"P= "<<p<<endl;
	
	//setw manupulator
	cout<<"M= "<<setw(9)<<m<<endl;
	cout<<"N= "<<setw(9)<<n<<endl;
	cout<<"P= "<<setw(9)<<p<<endl;
	
	cout<<"M= "<<setw(5)<<m<<endl;
	cout<<"N= "<<setw(5)<<n<<endl;
	cout<<"P= "<<setw(5)<<p<<endl;	
	int i=123;
	cout<<"Now with a fixed integer 123"<<endl;
	cout<<i<<endl;
	cout<<setw(10)<<i<<endl;
	cout<<setw(10)<<left<<i<<endl;

	//showpos manupulator
	cout<<showpos<<i<<endl;
	cout<<setw(10)<<right<<i<<endl;

	//this 'fill' is called a member function
	cout.fill('*');

	//'internal' manupulator
	cout<<"With internal manupulator: "<<endl<<setw(10)<<internal<<i<<endl;
	//no 'showpos' manupulator
	int j=567;
	cout << j << endl;
	cout<<"With noshowpos manupulator"<<endl<< noshowpos << j << endl;

	return 0;
}
