#include<iostream>
int main() 
{
    std::cout <<"\nEnter two integers : \n";
    int a,b;
    std::cin>>a>>b;
    std::cout<<"The greater value is "<<(a>b?a:b)<<"\n";
    return 0;
}