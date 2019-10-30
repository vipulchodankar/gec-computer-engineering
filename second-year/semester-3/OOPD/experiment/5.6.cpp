#include<iostream>
#include<cstring>
using namespace std;
class fraction{
	int numerator;
	int denominator;
	public:
		fraction(int n=0,int d=0)
		{
			numerator=n;
			denominator=d;
		}
		
		bool operator==(fraction b)
		{
			if(numerator==b.numerator)
			return 1;
			else
			return 0;
		}
		
			bool operator>=(fraction b)
		{
			if(numerator>=b.numerator)
			return 1;
			else
			return 0;
		}
			bool operator<=(fraction b)
		{
			if(numerator<=b.numerator)
			return 1;
			else
			return 0;
		}
			bool operator!=(fraction b)
		{
			if(numerator!=b.numerator)
			return 1;
			else
			return 0;
		}
	
	
	friend ostream &operator <<(ostream&,fraction&);
	friend istream &operator >>(istream&,fraction&);
}a,b;
ostream &operator <<(ostream &dout,fraction &c)
{
	dout<<"\n";
	dout<<c.numerator;
	dout<<"\t";
	dout<<c.denominator;
	return dout;
}

istream &operator >>(istream &din,fraction &c)
{
	cout<<"enter the values of numerator and denominator"<<endl;
	din>>c.numerator;
	din>>c.denominator;
	return(din);
}
int main()
{
	int n,m;
	cin>>a;
	cin>>b;
	cout<<(a==b)<<endl;
		cout<<(a!=b)<<endl;
			cout<<(a>=b)<<endl;
				cout<<(a<=b)<<endl;
	
	
}
