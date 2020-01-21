#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class book
{
	int bn,price,ic,tc;
	char name[20], author[20],pub[20];
	public:	book(int n,char na[],char pu[],char a[],int p,int i,int t)
			{
				bn=n;price=p;ic=i;tc=t;
				strcpy(name,na);
				strcpy(author,a);
				strcpy(pub,pu);
			}
			void issue()
			{
				if(tc>=ic)
				{
					cout<<"Book available\n";
					tc=tc-1;
				}
				else
					cout<<"Only "<<tc<< " books available\n";
			}
			void ret()
			{
				tc=tc+1;
				cout<<"Books have been returned\n";
			}
			void disp()
			{
				cout<<"Book: "<<name<<endl;
				cout<<"Book No.: "<<bn<<endl;
				cout<<"Author: "<<author<<endl;
				cout<<"Price: "<<price<<endl;
				cout<<"Copies Available: "<<tc<<endl;
			}
};
int main()
{
	book a(1,"A","P","aa",50,5,10);
	int ch;
	while(1)
	{
		cout<<"Enter the choice\n";
		cout<<"1.Issue\n2.Return\n3.Display\n4.EXIT\n";
		cin>>ch;
		switch(ch)
		{
			case 1:a.issue();	break;
			case 2:a.ret();		break;
			case 3:a.disp();	break;
			case 4:exit(1);
		}
	}
	return 0;
}
