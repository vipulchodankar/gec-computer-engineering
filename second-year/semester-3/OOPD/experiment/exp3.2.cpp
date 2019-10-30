#include<iostream>
using namespace std;
class tollbooth{
	int cno;
	double money;
	public:
		tollbooth()
		{
			cno=0;
			money=0.000;
		}
		void payingcar(){
			cno++;
			money+=.5;
		}
		void nopaycar(){
			cno++;
		}
		void display(){
			cout<<"the no of cars is "<<cno<<"\n";
			cout<<"the amount collected is "<<money<<"\n";
		}
}m;
int main()
{
	while (1){

	int ch;
	cout<<"enter the operation to be performed:-\n";
	cout<<"enter 1 if the car pays n leaves\n";
	cout<<"enter 2 if the car leaves without paying\n";
	cout<<"Enter 3 to display the collection\n";
	cout<<"Enter 4 to exit\n";
	cout<<"enter the choice:-\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			m.payingcar();
			break;
			
		case 2:
			m.nopaycar();
			break;
			
		case 3:
			m.display();
			break;
			
		case 4:
			exit(1);
			
		
	}
}
}


