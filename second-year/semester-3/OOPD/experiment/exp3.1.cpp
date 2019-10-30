#include<iostream>
using namespace std;
	class Int{
		int i;
		public:
			void value();
			void value(int);
			void add( Int, Int);
			 void display();
			}a,b,c,d;
			
	void Int :: value ()
	{
		i=0;
	}
	
		void Int :: value(int n)
	{
		i=n;
	}
	 void Int :: add ( Int b,Int c )
	{
		i=b.i+c.i;
	}
	void Int ::display()
	{
		cout<<"the value of object is"<<i<<endl;
	}
int main()
{
	int temp;
	a.value();
	a.display();
	cout<<"enter the first value:-\n";
	cin>>temp;	
	b.value(temp);
	b.display();
	cout<<"enter the second value:-\n";
	cin>>temp;
	c.value(temp);
	c.display();
	
	d.add(b,c);
	d.display();
}
