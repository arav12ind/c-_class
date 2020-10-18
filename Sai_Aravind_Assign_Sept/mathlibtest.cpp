#include<iostream>
#include<cmath>
#include<assert.h>
using namespace std;

#define EPSILON 0.00001
bool eq(double a, double b)
{
    return fabs(a-b)<EPSILON;
}


int main()
{
    double a= 10.0,b=-9.0,v=9.0,c=-10.0,d=1.0,e=0,f=0,g=2.71828,h=7.38906,i=5.1,j=0.0,k=8.76,l=1.992,m=1.0,n=2.0,o=1.0,p=2.0,q=128,r=3,s=30.0,t=3.0;
    assert(fabs(5.1)==5.1);
    assert(fabs(0.0)==0);
    assert(fabs(-8.76)==8.76);

    assert(ceil(9.2)==a);
    assert(ceil(-9.8)==b);
    assert(floor(9.2)==v);
    assert(floor(-9.8)==c);
    assert(cos(0.0)==d);
    assert(sin(0.0)==e);
    assert(tan(0.0)==f);
    assert(eq(exp(1.0),g));
    assert(eq(exp(2.0),h));

    assert(eq(fmod(13.657,2.333),l));
    assert(eq(log(2.71828),m));
    assert(eq(log(7.38906),n));
    assert(eq(log10(10.0),o));
    assert(eq(log10(100.0),p));
    assert(pow(2,7)==q);
    assert(pow(9,.5)==r);
    assert(sqrt(900)==s);
    assert(sqrt(9.0)==t);
    cout<<"\n All good with maths library\n";
    return 0;
}
