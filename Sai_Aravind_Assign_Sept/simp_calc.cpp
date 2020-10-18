#include<iostream>

using namespace std;

int main()
{
    double a,b,c;
    char op;
    cout<<"\n\n\t\t A simple calculator which supports +,-,*,/,% \n\n";
    cout<<"\nSupports only one operation at a time and 0#0 for exit;";
    cout<<"\nExample: 123.5+345.1\n";
    while(true)
    {
        cout<<"\n : ";
        cin>>a>>op>>b;
        switch(op)
        {
            case '#':
            exit(0);
            case '+':
            c=a+b;
            break;
            case '-':
            c=a-b;
            break;
            case '*':
            c=a*b;
            break;
            case '/':
            if(b==0)
            {
                cout<<"\nDivide by zero error!!!\n";
                continue;
            }
            c=a/b;
            break;
            case '%':
            if(b==0)
            {
                cout<<"\nDivide by zero error!!!\n";
                continue;
            }
            c=(int)a%(int)b;
            break;
            default:
            cout<<"\nInvalid operation!!\n";
            continue;
        }
        cout<<"\n"<<c;
    }
    return 0;
}