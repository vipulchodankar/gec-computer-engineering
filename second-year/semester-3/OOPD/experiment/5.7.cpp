//complete the complex multiplication part
#include<iostream>
using namespace std;
class complex{
	float real;
	float img;
	
	public:
		complex(){
			real=0;
			img=0;
		}
		
		complex(int a,int b)
		{
			real=a;
			img=b;
		}
		
		complex operator + (complex a){
			complex temp;
			temp.real=real+a.real;
			temp.img=img+a.img;
			return temp;
		}
		
			complex operator - (complex a){
			complex temp;
			temp.real=real-a.real;
			temp.img=img-a.img;
			return temp;
		}
		
			complex operator * (complex a){
			complex temp;
			temp.real=real*a.real;
			temp.img=img*a.img;
			return temp;
		}
		
		void display()
		{	if(img<0)
				cout<<real<<img<<"i"<<endl;
			else
				cout<<real<<"+"<<img<<"i"<<endl;
		}
		void operator ++(int)
		{
			real++;
			img++;
		}
		void operator --(int)
		{
			real--;
			img--;
		}
};

int main()
{
	complex a1(6,5),a2(6,8),a3;
	a3=a1+a2;
	a3.display();
	a3=a1-a2;
	a3.display();
	a3=a1*a2;
	a3.display();
	a3--;
	a3.display();
	a3++;
	a3.display();
	
}
