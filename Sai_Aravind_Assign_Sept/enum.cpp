#include<iostream>
#include<cassert>
using namespace std;
enum weekday
{
sunday=1, monday, tuesday, wednesday,
 thursday, friday, saturday
};

void print_day(enum weekday w)
{
	char const *a;
	switch(w)
	{
		case 1:
			a="Monday";
			break;
		case 2:
			a="Tuesday";
			break;
		case 3:
			a="Wednesday";
			break;
		case 4:
			a="Thursday";
			break;
		case 5:
			a="Friday";
			break;
		case 6:
			a="Saturday";
			break;
		case 7:
			a="Sunday";
			break;
	}
	cout<<a<<'\t';
}
int main()
{
 enum weekday day1, day2;
 int n1, n2;
 cout << "enter 2 days (in number):\n";
 cin >> n1 >> n2;
 assert(0<n1&&n1<8);
 assert(0<n2&&n2<8);
 // n1 & n2 should be between 1 and 7
 // check condition using assertions
 day1=(enum weekday)n1;
 day2=(enum weekday)n2;
 print_day(day1); print_day(day2);
 if(day1==day2)
 cout<<"\nThe days are the same\n\n";
 else
 cout<<"\nThe days are not the same\n\n";
}
