#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	float number1,number2;

	cout<< "Enter the numbers: ";
	cin >> number1 >> number2;
	
	cout << "The numbers are: " << number1 << '\t' << number2 << endl;
	cout << "Sum = " << number1+number2 << endl;
	cout << "Average = " << (number1+number2)/2 << endl;
}
