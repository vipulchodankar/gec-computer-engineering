#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
int c3dc(int a,int r)
{
	return(r*cos(a));
}
int c3ds(int a,int r)
{
	return(r*sin(a));
}
int cpa(int a,int b)
{
	return(atan(b/a));
}
int cpr(int a,int b)
{
	return(sqrt(a*a+b*b));
}

class POLAR{
	int angle;
	int radius;
	public:
		POLAR(int r=0,int a=0)
		{
			angle=a;
			radius=r;
		}
		POLAR operator +(POLAR b)
		{
			int x1,y1,x2,y2,s1,s2;
			x1=c3dc(angle,radius);
			x2=c3dc(b.angle,b.radius);
			y1=c3ds(angle,radius);
			y2=c3ds(b.angle,b.radius);
			POLAR temp;
			s1=x1+x2;
			s2=y1+y2;
			temp.angle=cpa(s1,s2);
			temp.radius=cpr(s1,s2);
			return(temp);
		}
		void display()
		{
			cout<<"\n"<<radius<<","<<angle<<"\n";
		}
		
};
int main()
{
	class POLAR a(10,20),b(20,30),c;
	c=a+b;
	c.display();
}
