#include<iostream>
using namespace std;
int main()
{
    int m,a;
    cout<<"\nEnter number of mangoes : ";
    cin>>m;
    cout<<"\nEnter number of apples  : ";
    cin>>a;
    cout<<"There "<<(a+m==1?"is ":"are ")<<a+m<<" Fruit"<<(a+m==1?" ":"s ")<<" in Total\n";
    return 0;
}