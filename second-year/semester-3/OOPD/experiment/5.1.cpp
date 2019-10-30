#include<iostream>
#include<cstring>
using namespace std;
class FLOAT{
	float a;
	public:
		FLOAT()
		{
			a=0;
		}
		FLOAT (float n){
			a=n;
		}
		FLOAT operator +(FLOAT b)
		{	
				return(FLOAT(a+b.a));	
			
		}
			FLOAT operator -(FLOAT b)
		{
			return(FLOAT(a-b.a));
		}
			FLOAT operator *(FLOAT b)
		{
				return(FLOAT(a*b.a));	
			
		}
			FLOAT operator /(FLOAT b)
		{
			return(FLOAT(a/b.a));
		}
		friend ostream &operator <<(ostream&,FLOAT&);
	friend istream &operator >>(istream&,FLOAT&);
		void display()
		{
			cout<<a<<endl;
		}
}n1,n2,n3;
ostream &operator <<(ostream &dout,FLOAT &c)
{
	dout<<"\n";
	dout<<c.a;
	return dout;
}

istream &operator >>(istream &din,FLOAT &c)
{
	cout<<"enter the values of a"<<endl;
	din>>c.a;
	return(din);
}
		

int main()
{
	
	cin>>n1>>n2;
	n3=n1+n2;
	cout<<n3;
	n3=n1-n2;
	n3.display();
	n3=n1*n2;
	n3.display();
	n3=n1/n2;
	n3.display();
	
	
}
