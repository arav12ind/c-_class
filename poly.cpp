#include<iostream>
using namspace std;

float poly(float x, float a0=0,float a1=0,float a2=0,float a3=0)
{
	return a0+(a1+(a2+a3*x)*x)*x;
}



int main()
{
	float x=2.0003;
}
