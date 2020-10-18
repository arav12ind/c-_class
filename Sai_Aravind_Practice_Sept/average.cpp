#include<iostream>
using std::cout;
using std::endl;
int main()
{
	float number1=10, number2=20;
	float sum,average;

	sum=number1+number2;
	average = sum/2;
	cout<<"The two numbers are: " << number1 << "\t" << number2 << '\n';
	cout << "Sum = " << number1 + number2 << endl;
	cout << "Average = " << (number1 + number2) /2<< endl;
	return 0;
}
