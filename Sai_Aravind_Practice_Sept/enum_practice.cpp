/*#include <iostream>
#include <assert>
using namespace std;*/

/*// istream::unget example
#include <iostream>     // std::cin, std::cout
#include <string>       // std::string

int main () {
  std::cout << "Please, enter a number or a word: ";
  char c = std::cin.get();

  if ( (c >= '0') && (c <= '9') )
  {
    int n;
    std::cin.unget();
    std::cin >> n;
    std::cout << "You entered a number: " << n << '\n';
  }
  else
  {
    std::string str;
    std::cin.unget();
    getline (std::cin,str);
    std::cout << "You entered a word: " << str << '\n';
  }
  return 0;
}*/


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
	day(weekday(d1));day(weekday(d2));
	if (weekday(d1)==weekday(d2))
		cout<<"Both days entered are the same!"<<endl;
	else 
		cout<<"Entered days are different!"<<endl;

	return 0;


}