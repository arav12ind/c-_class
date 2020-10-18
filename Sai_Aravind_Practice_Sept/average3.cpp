#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float x,sum=0;
	int i,n;

//	cout << "Enter the value of n: ";
//	cin>> n;
	for (i=0;cin >> x;sum=sum+x,i++);
//	for (i=0;i<n;i++)
//	{
//		cin>>x;
//		sum=sum+x;
//	}
	cout << "Sum: " <<static_cast<double>(sum) <<endl;
	float average = static_cast<double>(sum) / i;

	cout << fixed << "Average = " << (double)average << endl;
	cout << setprecision (15) <<"Average with setprecision: "<< average << endl;
	cout << setprecision(13) << scientific << "Average with scientific and setprecision(13) " <<average << endl;
	cout << fixed << average;
	
	return 0;
}
