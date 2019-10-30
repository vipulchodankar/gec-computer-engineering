#include<iostream>
#include<cstring>
using namespace std;
class matrix{
	int a[3][3];
	public:
		matrix(){
			for(int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++)
						a[i][j]=0;
				}
		}
		matrix(int k[])
		{
			//for(int i=0;i<9;i++)
			//cout<<"the function is called";
			int p=0;
				for(int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++){
						a[i][j]=k[p++];
						//cout<<a[i][j];
						}
					//	if(p==strlen(k))
					//	return 0;
				}
	
		}
		matrix operator +(matrix b)
		{
			class matrix c;
				for(int i=0;i<3;i++)
				{
					for(int j=0;j<3;j++){
						//cout<<a[i][j]<<"\t";
						c.a[i][j]=a[i][j]+b.a[i][j];
						//cout<<c.a[i][j]<<"\t";
						}
				}
				return(c);
			
		}
		
		void display()
		{
			cout<<"the value is";
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++)
			cout<<a[i][j]<<"\t";
			cout<<"\n";}
		}
};

int main()
{
	class matrix l,b,c;
	int d[9],e[9];
	cout<<"Enter the value of matrix 1: \n";
	for(int i=0;i<9;i++)
	cin>>d[i];
	l=d;
	//a.display();
	cout<<"Enter the value of matrix 2: \n";
	for(int i=0;i<9;i++)
	cin>>e[i];
	b=e;
	//b.display();
	//l.display();
	c=b+l;
	c.display();
	
}

