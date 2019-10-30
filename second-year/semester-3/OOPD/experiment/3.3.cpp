#include<iostream>
using namespace std;
class time{
	int hours,min,sec;
	public:
		time()
		{
			hours=0;
			min=0;
			sec=0;
		}
		void initialize(int a,int b,int c)
		{
			hours=a;
			min=b;
			sec=c;
		}
		void display()
		{
			cout<<"the time is "<<hours<<":"<<min<<":"<<sec;
		}
		void addtime(time t1,time t2)
		{
			hours=t1.hours+t2.hours;
			min=t1.min+t2.min;
			sec=t1.sec+t2.sec;
			if(sec>=60){
			min+=(sec/60);
			sec=sec-60;}
			if(min>=60){
			hours+=(min/60);
			min=min-60;
		}
	
		}
}t1,t2,t3;

int main() {
	int a,b,c,d,e,f;
	cout<<"\nEnter the first time in the order:\tHH:MM:SS\n";
	cin>>a>>b>>c;
	t1.initialize(a,b,c);
	cout<<"\nEnter the second time in the order:\tHH:MM:SS\n";
	cin>>d>>e>>f;
	t2.initialize(d,e,f);
	t3.addtime(t1,t2);
	t3.display();
}
