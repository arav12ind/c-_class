/*  Written by : Sai Aravind S.V.
 *	
 */

#include<iostream>
#include<math.h>
#include<complex>
using namespace std;


void box()
{
	cout<<"*************               * * *                  *                        *               \n";
	cout<<"*           *             *       *              * * *                    *   *             \n";
	cout<<"*           *            *         *           *  * *  *                *        *          \n";
	cout<<"*           *            *         *               *                  *            *        \n";
	cout<<"*           *            *         *               *                *                *      \n";
	cout<<"*           *            *         *               *                  *            *        \n";
	cout<<"*           *            *         *               *                    *        *          \n";
	cout<<"*           *             *       *                *                       *   *            \n";
	cout<<"*************               * * *                  *                         *              \n";
}


void multiple()
{
	int a,b;
	cout<<"\n Enter 2 integers:\n";
	cin>>a>>b;
	if(a%b==0)
		cout<<a<<" is a multiple of "<<b<<"\n";
	else
		cout<<a<<" is not a multiple of "<<b<<"\n"; 
}

void strip_digits()
{
	int num,m;
	cout<<"\nEnter a number : ";
	cin>>num;
	for(int i=0;i<5;++i,num=(num-m)/10)
		cout<<(m=num%10)<<"   ";
}

void compute_expr()
{
	int a,sum=0,mult=1;
	cout<<"\nEnter 4 integers : ";
	for(int i=0;i<4;++i)
	{
		cin>>a;
		sum+=(mult*=a);
	}
	cout<<sum<<"\n";
}

void reverse_digits()
{
	cout<<"Enter 4 integers : \n";
	int a[4];
	for(int i=0;i<4;++i)
		cin>>a[i];
	for(int i=3;i>=0;++i)
		cout<<"\t"<<a[i];
	cout<<"\n";
}


float triangle(float a,float b,float c)
{
	float s;
	s=(a+b+c)/2;
 	if(s<=0||s<a||s<b||s<c)
	{
		cout<<"invalid input\n";
		return -1;
	}
	return sqrt((s-a)*(s-b)*(s-c));
}

void triangle_area()
{
	cout<<"\nEnter the length of 3 sides of the triangle:\n";
	float a,b,c;
	cin>>a>>b>>c;
	a=triangle(a,b,c);
	if(a!=-1)
		cout<<"\nArea is "<<a<<"\n";
}


float dist(float a,float b,float c,float d)
{
	return sqrt(pow(c-a,2)+pow(d-b,2));
}


void distance()
{
	int a,b,c,d;
	cout<<"\nEnter 1st point : \n";
	cin>>a>>b;
	cout<<"\nEnter 2nd point : \n";
	cin>>c>>d;
	cout<<"\nDistance is "<<dist(a,b,c,d)<<"\n";
}

void triangle_pt()
{
	float p1[2],p2[2],p3[2],a;
	cout<<"\n Enter 1st point : \n";
	cin>>p1[0]>>p1[1];
	cout<<"\n Enter 2nd point : \n";
	cin>>p2[0]>>p2[1];
	cout<<"\n Enter 3rd point : \n";
	cin>>p3[0]>>p3[1];
	if((a=triangle(dist(p1[0],p1[1],p2[0],p2[1]),dist(p1[0],p1[1],p3[0],p3[1]),dist(p3[0],p3[1],p2[0],p2[1])))==-1)
	{
		cout<<"\n Invalid input\n";
		return;
	}

	cout<<"\nArea is "<<a<<"\n";
}


int slope(float a,float b,float c,float *d)
{
	if(a==0&&b==0)
		return 1;	// invalid
	if(a==0)
		return 2;	//vertical line
	if(b==0)
	{
		*d=0;
		return 0;
	}
	*d=dist(0,-c/b,-c/a,0);
	return 0;
}

void eq_slope()
{
	cout<<"\nEnter a,b,c in equation ax+by+c=0 : \n";
	float a,b,c,d;
	int x;
	cin>>a>>b>>c;
	if((x=slope(a,b,c,&d))==1)
	{
		cout<<"\nInvalid input\n";
		return;
	}
	if(x==2)
	{
		cout<<"\nVERTICAL LINE\n";
		return;
	}
	cout<<"\n Slope is "<<x<<"\n";
}


float dist_pt_ln(float a,float b,float c,float d,float e)
{
	return abs(c*a+d*b+e)/sqrt(a*a+b*b);
}


void distance_pt_ln()
{
	cout<<"\n Enter a point : ";
	float a,b;
	cin>>a>>b;
	cout<<"\nEnter a,b,c in ax+by+c expression : ";
	float c,d,e;
	cin>>c>>d>>e;
	cout<<"\nThe distance betwwen point and line is "<<dist_pt_ln(a,b,c,d,e)<<"\n";
}


void circle()
{
	cout<<"\nEnter a,b,c in x^2+y^2+2ax+2by+c=0 equation : ";
	float a,b,c;
	cin>>a>>b>>c;
	c=a*a+b*b-c;
	if(!(c<0))
		cout<<"\n Center : ("<<-a<<" , "<<-b<<")\t Radius "<<sqrt(c);
	else
		cout<<"\nInvalid equation\n";
}


void intersection()
{
	cout<<"\nEnter a,b,c,d,e,f in the equations\n ax+by+c=0  and px+qy+r=0  : \n";
	float a,b,c,p,q,r,dis,x,y;
	cin>>a>>b>>c>>p>>q>>r;
	dis=q*a-b*p;
	x=b*r-q*c;
	y=p*c-r*a;
	if(dis==0&&x==0&&y==0)
	{
		cout<<"\n They are the same line";
		return;
	}
	if(dis==0)
	{
		cout<<"\n Parllel lines\n";
		return;
	}
	cout<<"\nThe lines intersect at ("<<x/dis<<" , "<<y/dis<<")\n";
}



void isrighttri()
{
	cout<<"\n Enter the three length of sides of triangle : ";
	float a,b,c;
	cin>>a>>b>>c;
	if(a<=0||c<=0||b<=0)
	{
		cout<<"\n In valid values\n";
		return;
	}
	a*=a;
	b*=b;
	c*=c;
	if(b+c==a )
		cout<<"\n TRUE\n";
	else
		cout<<"\nFALSE\n";

}

void angle()
{
	cout<<"\n Enter the three length of sides of triangle : ";
	float a,b,c,d;
	cin>>a>>b>>c;
	if(a<=0||c<=0||b<=0)
	{
		cout<<"\n In valid values\n";
		return;
	}
	d=(b*b+c*c-a*a)/(2*b*c);
	if(d<-1 || d>1)
	{
		cout<<"\n Invalid  input\n";
		return;
	}
	cout<<"\nAngle is "<<acos(d)<<" rad\n";
}


void quad()
{
	cout<<"\nEnter the a,b,c in ax^2+bx+c=0  : \n";
	complex<float> a,b,c,x,y,d;
	cin>>a>>b>>c;
	if(a==(float)0)
	{
		cout<<"\n NOT quadratic\n";
		return;
	}
	a*=2.0;
	b=-b;
	d=sqrt(b*b-(float)2*a*c);
	x=(b+d)/a;
	y=(b-d)/a;
	if(imag(d)==0)
	{
		if(x==y)
			cout<<"the root is "<<real(x)<<"\n";
		else
			cout<<"\nThe roots are "<<real(x)<<" "<<real(y)<<"\n";
	}
	else
			cout<<"the root are "<<real(x)<<" ,"<<imag(x)<<" and "<<-imag(x)<<"\n";
}


void disp(complex<float> x)
{
	cout<<real(x);
	if(imag(x)>0)
		cout<<" +i "<<imag(x);
	else if(imag(x)<0)
		cout<<" -i "<<-imag(x);
}

void quad2()
{
	cout<<"\nEnter the a,b,c in ax^2+bx+c=0  : \n";
	complex<float> a,b,c,x,y,d;
	cin>>a>>b>>c;
	if(a==(float)0)
	{
		cout<<"\n NOT quadratic\n";
		return;
	}
	a*=2.0;
	b=-b;
	d=sqrt(b*b-(float)2*a*c);
	x=(b+d)/a;
	y=(b-d)/a;
	if(imag(d)==0)
	{
		if(x==y)
			cout<<"the root is "<<real(x)<<"\n";
		else
			cout<<"\nThe roots are "<<real(x)<<" "<<real(y)<<"\n";
	}
	else
		{
			cout<<"the root are ";
			disp(x);
			cout<<"  and  ";
			disp(y);
			cout<<"\n";
		}	

}




int main()
{
	int ch;
	while(1)
	{
		cout<<"\n\nEnter question number in assignment 1 (1 to 16) ( 0 for exit ) : ";
		cin>>ch;
		switch(ch)
		{
			case 1:		box();					break;
			case 2:		multiple();				break;
			case 3:		strip_digits();			break;
			case 4:		compute_expr();			break;
			case 5:		reverse_digits();		break;
			case 6:		triangle_area();		break;
			case 7:		distance();				break;
			case 8:		triangle_pt();			break;
			case 9:		eq_slope();				break;
			case 10:	distance_pt_ln();		break;
			case 11:	circle();				break;
			case 12:	intersection();			break;
			case 13:	isrighttri();			break;
			case 14:	angle();				break;
			case 15:	quad();					break;
			case 16:	quad2();				break;
			case 0:		exit(0);
			default:	cout<<"\n Tnvalid Input \n";
		}
	}
}