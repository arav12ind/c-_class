#include<iostream>
class cdll
{
	char a;
	cdll *n,*p;
	cdll* New(char x)
	{
		return new cdll(x);
	}
	public:
	cdll()
	{
		n=p=this;
		a=0;
	}
	cdll(char x)
	{
		n=p=this;
		a=x;
	}

	void insert(char x,int p)
	{
		if(a==0)
		{
			a=x;
			return;
		}
		cdll *m;
		if(p<0)
		{
			m=New(x);
			m->p=this->p;
			m->p->n=m;
			m->n=this;
			this->p=m;
			return;
		}
		if(p==0)
		{
			m=New(a);
			m->p=this;
			m->n=n;
			n->p=m;
			n=m;
			a=x;
			return;
		}
		m=New(x);
		cdll *tmp=this;
		int i=0;
		for(i=0;i<p;++i)
			tmp=tmp->n;
		if(i!=p)
		{
			m->p=tmp->p;
			m->p->n=m;
			m->n=tmp;
			tmp->p=m;
			return;
		}
		else
		{
			m=New(x);
			m->p=this->p;
			m->p->n=m;
			m->n=this;
			this->p=m;
			return;
		}
	}

	void display()
	{
		cdll *x=this;
		do{
			x=x->n;
			std::cout<<x->a;
		}while(x!=this);
	}
	~cdll()
	{
		cdll *x=this->n,*t;
		while(x!=this)
		{
			t=x->n;
			x->p=x->n=x;
			delete x;
			x=t;
		}

	}
};

using namespace std;
int main()
{
	cdll x;
	x.insert('a',1);
	x.insert('b',-1);
	x.insert('c',0);
	x.display();
	return 0;
}
