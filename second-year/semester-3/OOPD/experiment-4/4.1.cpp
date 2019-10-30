#include<iostream>
#include<cstring>

using namespace std;

class fraction{
	long int numerator;
	long int denominator;
	public:
		fraction(long int n=0,long int d=0) {
			numerator=n;
			denominator=d;
		}
		
		void getvalues(long int a,long int b) {
			numerator=a;
			denominator=b;
		}
		
	void operator ++() {
		++numerator;
		++denominator;	
	}
	
	void operator ++(int) {
		numerator++;
		denominator++;	
	}
	
	void display() {
		cout<<numerator<<"/"<<denominator<<endl;
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

istream &operator >>(istream &din, fraction &c) {
	cout<<"Enter the values of Numerator and Denominator"<<endl;
	din>>c.numerator;
	din>>c.denominator;
	return(din);
}

int main() {
	int n,m;
	cin>>a;
	cout<<a;
	++a;
	a++;
	cout<<a;
}
