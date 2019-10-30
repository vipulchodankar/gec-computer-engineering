#include<iostream>
#include<cstring>
using namespace std;
class fraction{
	int num;
	int den;
	public:
		fraction(int n=0,int d=0)
		{
			num=n;
			den=d;
		}
		fraction operator +(fraction b)
		{	
				fraction temp;
				temp.num=num+b.num;
				temp.den=den+b.den;
				return(temp);	
			
		}
		fraction operator -(fraction b)
		{	
				fraction temp;
				temp.num=num-b.num;
				temp.den=den-b.den;
				return(temp);	
			
		}
			fraction operator *(fraction b)
		{	
				fraction temp;
				temp.num=num*b.num;
				temp.den=den*b.den;
				return(temp);	
			
		}
		fraction operator /(fraction b)
		{	
				fraction temp;
				temp.num=num/b.num;
				temp.den=den/b.den;
				return(temp);	
			
		}
		bool operator ==(fraction b)
		{	
				
				if(num==b.num&&den==b.den)
				return(true);
				else
				return(false);	
			
		}
		void display()
		{
			cout<<num<<"/"<<den<<endl;
		}
		
};
int main()
{
	fraction a(5,6),b(6,7),c;
	c=a+b;
	c.display();
	c=a-b;
	c.display();
	c=a*b;
	c.display();
	c=a/b;
	c.display();
	cout<<(a==b);
	
}
