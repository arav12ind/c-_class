#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"\nEnter three integers : ";
    cin>>a>>b>>c;
    cout<<"The greatest number is "<<((a>b)?(a>c?a:c):(b>c?b:c))<<"\n";
    return 0;
}