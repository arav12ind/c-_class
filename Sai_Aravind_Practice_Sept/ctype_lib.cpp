#include<iostream>
using namespace std;

int main()
{
	char c;
	cout<<"Enter a character: ";
	cin>>c;

	cout<<"isdigit: "<<isdigit(c)<<endl;
	cout<<"isalpha: "<<isalpha(c)<<endl;
	cout<<"isalnum: "<<isalnum(c)<<endl;
	cout<<"isxdigit: "<<isxdigit(c)<<endl;
	cout<<"islower: "<<islower(c)<<endl;
	cout<<"isupper: "<<isupper(c)<<endl;
	cout<<"tolower: "<<(char)tolower(c)<<endl;
	cout<<"toupper: "<<(char)toupper(c)<<endl;
	cout<<"isspace: "<<isspace(c)<<endl;
	cout<<"iscntrl: "<<iscntrl(c)<<endl;
	cout<<"ispunct: "<<ispunct(c)<<endl;
	cout<<"isprint: "<<isprint(c)<<endl;
	cout<<"isgraph: "<<isgraph(c)<<endl;
	return 0;
}