/*
 * Program by Sai Aravind S.V.
 */

#include<iostream>


using namespace std;

void pattern1()
{
	int j,i;
	for(i=0;i<10;++i)
	{
		for(j=0;j<20;++j)
			if((i&1)&&(j&1))
				cout<<'O';
			else
				cout<<'*';
		cout<<'\n';
	}
			cout<<'\n';
}

void pattern2()
{
	int i,j;
	for(i=0;i<10;++i)
	{
		for(j=0;j<20;++j)
		{
			if(((i<3)&&(j<8))||((i>6)&&(j>14)))
				cout<<'O';
			else
				cout<<'*';
		}
			cout<<'\n';
	}
			cout<<'\n';
}


void pattern3()
{
	int i,j;
	for(i=0;i<9;++i)
	{
		for(j=0;j<11;++j)
		{
			if(!((i+j)&1))
				cout<<'O';
			else
				cout<<'*';
		}
			cout<<'\n';
	}
			cout<<'\n';
}

void pattern4()
{
	int i,j;
	for(i=0;i<10;++i)
	{
		for(j=0;j<30;++j)
		{
			if((!(i&1))||j==1||j==2||
								j==4||
								j==7||
								j==8||
								j==11||
								j==12||
								j==13||
								j==14||
								j==16||
								j==17||
								j==19||
								j==22||
								j==23||
								j==26||
								j==28||
								j==29
								)
				cout<<'O';
			else
				cout<<'*';
		}
			cout<<'\n';
	}
			cout<<'\n';
}

void pattern5()
{
	int i,j;
	for(i=0;i<9;++i)
	{
		for(j=0;j<20;++j)
		{
			if(i<7&&(j>10||i+j<6))
				cout<<'O';
			else
				cout<<'*';
		}
		cout<<'\n';
	}
	cout<<'\n';
}

void pattern6()
{
	int i,j;
	for(i=0;i<10;++i)
	{
		for(j=0;j<15;++j)
		{
			if((j<i&&!(i&1)&&(j&1))||(j>i&&(i&1)&&!(j&1)))
				cout<<'*';
			else
				cout<<'O';
		}
		cout<<'\n';
	}
	cout<<'\n';
}

void pattern7()
{
	int i,j;
	for(i=0;i<10;++i)
	{
		for(j=0;j<21;++j)
		{
			if((i&1)&&(i<4||(i>4&&(j<4||j>14))))
				cout<<'O';
			else
				cout<<'*';
		}
		cout<<'\n';
	}
	cout<<'\n';
}
void pattern8()
{
	int i,j,k[]={6,4,3,2,2,2,3,4,6};
	for(i=0;i<11;++i)
	{
		for(j=0;j<17;++j)
		{
			if(i!=0&&i!=10&&j>=k[i-1]&&j<17-k[i-1])
				cout<<'*';
			else
				cout<<'O';
		}
		cout<<'\n';
	}
	cout<<'\n';
}


void pattern9()
{
	int i,j;
	int l=5,u=6;
	for(i=0;i<10;++i)
	{
		if(i>1)
		{
			--l;
			++u;
		}
		for(j=0;j<20;++j)
		{
			if(j>l&&j<u)
					cout<<'O';
			else
				cout<<'*';
		}
		cout<<'\n';
	}
	cout<<'\n';
}

void pattern10()
{
	int i,j;
	int l=6,u=6;
	for(i=0;i<10;++i)
	{
		if(i>1)
		{
			--l;
			u+=2;
		}
		for(j=0;j<20;++j)
		{
			if(j>l&&j<u)
					cout<<'O';
			else
				cout<<'*';
		}
		cout<<'\n';
	}
	cout<<'\n';
}

void pattern11()
{
	int i,j;
	for(i=0;i<10;++i)
	{
		for(j=0;j<20;++j)
		{
			if((i&1)&&j%5!=0)
				cout<<'O';
			else
				cout<<'*';
		}
		cout<<'\n';
	}
	cout<<'\n';
}


void pattern12()
{
	int i,j;
	for(i=0;i<10;++i)
	{
		for(j=0;j<20;++j)
		{
			if(((i&1)&&j%5!=0)||(!(i&1)&&(j%5==0)))
				cout<<'O';
			else
				cout<<'*';
		}
		cout<<'\n';
	}
	cout<<'\n';
}


void pattern13()
{
	int i,j;
	for(i=0;i<10;++i)
	{
		for(j=0;j<15;++j)
		{
			if(((i&1)&&(j<i||(j>=i&&(j&1))))||(!(i&1)&&(j==i||(j>i&&(j&1)))))
				cout<<'O';
			else
				cout<<'*';
		}
		cout<<'\n';
	}
	cout<<'\n';
}


void spclsum_14()
{

	int a,sum=0,i=1,x,b=0;
	cout<<"\nEnter a positive number:";
	cin>>a;
	if(a<0)
	{
		cout<<"\nEnter a positive number\n";
		return;
	}
	for(x=a%10;a>0;i*=10,x=a%10)
	{
		b+=x*i;
		sum+=b;
		a/=10;
	}
	cout<<"\n"<<sum<<"\n";
}

void spclsum_15()
{

	int a,sum=0;
	cout<<"\nEnter a positive number:";
	cin>>a;
	if(a<0)
	{
		cout<<"\nEnter a positive number\n";
		return;
	}
	for(;a>0;a/=10)
		sum+=a;
	cout<<"\n"<<sum<<"\n";
}




void spclprod_16()
{
	int a,sum=0,term=1,x;
	cout<<"\nEnter a positive number:";
	cin>>a;
	if(a<0)
	{
		cout<<"\nEnter a positive number\n";
		return;
	}
	for(;a>0;a/=10)
	{
		term*=a%10;
		sum+=term;
	}
	cout<<"\nSpecial product is "<<sum<<"\n";
}

void evendig_17()
{
	int a,place,x;
	cout<<"\nEnter a positive number:";
	cin>>a;
	if(a<0)
	{
		cout<<"\nEnter a positive number\n";
		return;
	}
	for(x=a%10;a>0;x=a%10)
	{
		if(!(x&1))
		{
			for(x=a%10,place=0;a>0;x=a%10,++place)
				a/=10;
			cout<<"\nThe position is :"<<place<<"\n";
			return;
		}
		a/=10;
	}
	cout<<"\neven number not found\n";
}

void evendig2_18()
{
	int a,place,x;
	cout<<"\nEnter a positive number:";
	cin>>a;
	if(a<0)
	{
		cout<<"\nEnter a positive number\n";
		return;
	}
	for(x=a%10,place=1;a>0;x=a%10,++place)
	{
		if(!(x&1))
		{
			cout<<"\nThe position is : "<<place<<"\n";
			return;
		}
		a/=10;
	}
	cout<<"\nEven number not found\n";
}

	int power(int a,int b)
	{
		int ret=a;
		if(b==0)
			return 1;
		for(--b;b>0;--b)
			ret*=a;
		return ret;
	}
void del1st_19()
{
	int a,x,b=0,place=0;
	cout<<"\nEnter a positive number:";
	cin>>a;
	if(a<0)
	{
		cout<<"\nEnter a positive number\n";
		return;
	}
	while(1)
	{
		x=a%10;
		a/=10;
		if(a==0)
			break;
		b+=x*power(10,place);
		++place;
	}
	cout<<"\n Without 1st digit: "<<b<<"\n";
}

void put1st_20()
{
	int a,x,b=0,y,place=0;
	cout<<"\nEnter a positive number:";
	cin>>x;
	if(x<0)
	{
		cout<<"\nEnter a positive number\n";
		return;
	}
	cout<<"\nEnter a digit:";
	cin>>y;
	if(y<0||y>9)
	{
		cout<<"\nNot a digit\n";
		return;
	}
	while(1)
	{
		a=x%10;
		x/=10;
		if(a==0)
			break;
		b+=a*power(10,place);
		++place;
	}
	b+=y*power(10,place);
	cout<<"\nNew num: "<<b<<"\n";
}

void add1_21()
{
	int a,i=1;
	cout<<"\nEnter a positive number:";
	cin>>a;
	if(a<0)
	{
		cout<<"\nEnter a positive number\n";
		return;
	}
	for(;a>=i;i*=10)
		a+=i;
	cout<<"\nnew num: "<<a<<"\n";
}

void kthevendig_22()
{
	int a,i=1,k,x;
	cout<<"\nEnter a positive number:";
	cin>>a;
	if(a<0)
	{
		cout<<"\nEnter a positive number\n";
		return;
	}
	cout<<"\nk = ";
	cin>>k;
	if(k<1)
	{
		cout<<"\nInvalid input\n";
		return;
	}
	for(x=a%10;a>0;x=a%10)
	{
		if(!(x&1)&&(--k==0))
		{
			cout<<"\nThe position is : "<<x<<"\n";
			return;
		}
		a/=10;
	}
	
}

void ftkadd1_23()
{
	int i=1,k;
	float a,x;
	cout<<"\nEnter a number:";
	cin>>a;
	cout<<"\nk = ";
	cin>>k;
	if(k<1)
	{
		cout<<"\nInvalid input\n";
		return;
	}
	for(x=0.1;k>0;--k,x/=10)
		a+=x;
	cout<<"\nnew num "<<a<<"\n";

}

void enc()
{
	int inp,out,i;
	cout<<"\nto encrypt: ";
	cin>>inp;
	out=((inp%10+7)%10)*100+((((inp/=10)%10)+7)%10)*1000+((((inp/=10)%10)+7)%10)+((((inp/=10)%10)+7)%10)*10;
	cout<<"encrypted "<<out<<"\n";
}

void dec()
{
	int inp,out,i;
	cout<<"\nto decrypt: ";
	cin>>inp;
	out=((inp%10+3)%10)*100+((((inp/=10)%10)+3)%10)*1000+((((inp/=10)%10)+3)%10)+((((inp/=10)%10)+3)%10)*10;
	cout<<"decrypted "<<out<<"\n";
}
int main(int ac,char **ar)
{
	if(ac!=2)
	{
		cout<<"\nEnter only the question number as command line argument\nquestoion numbers are from 1 to 25\n";
		return 1;
	}
	switch(atoi(ar[1]))
	{
		case 1:
		pattern1();			break;
		case 2:
		pattern2();			break;
		case 3:
		pattern3();			break;
		case 4:
		pattern4();			break;
		case 5:
		pattern5();			break;
		case 6:
		pattern6();			break;
		case 7:
		pattern7();			break;
		case 8:
		pattern8();			break;
		case 9:
		pattern9();			break;
		case 10:
		pattern10();		break;
		case 11:
		pattern11();		break;
		case 12:
		pattern12();		break;
		case 13:
		pattern13();		break;
		case 14:
		spclsum_14();		break;
		case 15:
		spclsum_15();		break;
		case 16:
		spclprod_16();	break;
		case 17:
		evendig_17();		break;
		case 18:
		evendig2_18();	break;
		case 19:
		del1st_19();		break;
		case 20:
		put1st_20();		break;
		case 21:
		add1_21();			break;
		case 22:
		kthevendig_22();break;
		case 23:
		ftkadd1_23();		break;
		case 24:
		enc();					break;
		case 25:
		dec();					break;
	}
	return 0;
}
