/*#include <iostream>
#include <assert>
using namespace std;*/


#include<iostream>
#include<cassert>
using namespace std;

enum weekday
{
	sunday=1, monday, tuesday, wednesday, thursday, friday, saturday
};

void day(enum weekday x)
{
		switch(x)
		{
			case 1:
			cout<<"Monday"<<endl;
			break;
			case 2:
			cout<<"Tuesday"<<endl;
			break;
			case 3:
			cout<<"Wednesday"<<endl;
			break;
			case 4:
			cout<<"Thursday"<<endl;
			break;
			case 5:
			cout<<"Friday"<<endl;
			break;
			case 6:
			cout<<"Saturday"<<endl;
			break;
			case 7:
			cout<<"Sunday"<<endl;
			break;
			default:
			cout<<"Wrong input..."<<endl;
			break;

		}
}
int main()
{
	int d1,d2;
	cout<<"Enter two days in num: ";
	cin>>d1>>d2;

	assert(d1>0&&d1<8&&d1>0&&d2<8);
	day(weekday(d1));cout<<' ';day(weekday(d2));
	if (weekday(d1)==weekday(d2))
		cout<<"Both days entered are the same!"<<endl;
	else 
		cout<<"Entered days are different!"<<endl;

	return 0;


}
