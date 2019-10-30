#include<iostream>
#include<cstring>
using namespace std;
class arithmetic{
	float a;

	public:
		arithmetic(){
			a=0;
		}
		
		arithmetic(float n){
			a=n;
		}

		arithmetic operator +(arithmetic b){	
				return(arithmetic(a+b.a));	
			
		}
			
		arithmetic operator -(arithmetic b){
			return(arithmetic(a-b.a));
		}
		
		arithmetic operator *(arithmetic b){
				return(arithmetic(a*b.a));	
		}

		arithmetic operator /(arithmetic b){
			return(arithmetic(a/b.a));
		}

		friend ostream &operator <<(ostream&,arithmetic&);
		friend istream &operator >>(istream&,arithmetic&);
		void display()
		{
			cout<<a<<endl;
		}
};
ostream &operator <<(ostream &dout,arithmetic&c)
{
	dout<<"\n";
	dout<<c.a;
	return dout;
}

istream &operator >>(istream &din,arithmetic &c)
{
	cout<<"Enter the values of a: "<<endl;
	din>>c.a;
	return(din);
}
		
		
int main()
{
	//float a,b;
	//cout<<"enter the values of a and b"<<endl;
	//cin>>a>>b;
	class arithmetic n1,n2,n3;
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
