#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int main()
{
    string str;
    int upr,lwr,dig,wsp,spl;
    upr=lwr=dig=wsp=spl=0;
    cout<<"\n Enter some text:\n";
    getline(cin,str);
    for(int i=0;i<str.size();++i)
    {
        if(isupper(str[i]))
            ++upr;
        else if(islower(str[i]))
            ++lwr;
        else if(isdigit(str[i]))
            ++dig;
        else if(isspace(str[i]))
            ++wsp;
        else if(isprint(str[i]))
            ++spl;
    }
    cout<<"\nUpper:           "<<upr;
    cout<<"\nLower:           "<<lwr;
    cout<<"\nDigit:           "<<dig;
    cout<<"\nSpace:           "<<wsp;
    cout<<"\nOther Printable: "<<spl<<"\n";
    return 0;
}