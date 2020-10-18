#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;
int isvowel(int ch)
{
  int c = toupper(ch);
 
  return (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}
int main()
{
    string str;
    int vw,cn,dig;
    char x;
    vw=dig=cn=0;
    cout<<"\n Enter some text:\n";
    getline(cin,str);
    for(int i=0;i<str.size();++i)
    {
        if(isalnum(str[i]))
        {
            if(isdigit(str[i]))
                ++dig;
            else if(isvowel(str[i]))
                ++vw;
            else
                ++cn;
        }
    }
    cout<<"\nDigits    : "<<dig;
    cout<<"\nVowels    : "<<vw;
    cout<<"\nConsonants: "<<cn<<"\n";
    return 0;
}