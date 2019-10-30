#include<iostream>
#include<cstring>
using namespace std;
	int m,n;
class matrix{
	int a[10][10];
	public:
		matrix(){
			for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++)
						a[i][j]=0;
				}
		}
		matrix(int k[])
		{
			int p=0;
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++){
						a[i][j]=k[p++];
						}
				}
	
		}
		matrix operator +(matrix b)
		{
			class matrix c;
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++){
						c.a[i][j]=a[i][j]+b.a[i][j];
						}
				}
				return(c);
	}
		
		matrix operator -(matrix b)
		{
			class matrix c;
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++){
						c.a[i][j]=a[i][j]-b.a[i][j];
						}
				}
				return(c);
			
		}
		
		matrix operator *(matrix b)
		{
			class matrix c;
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++){
						c.a[i][j]=a[i][j]*b.a[i][j];
						}
				}
				return(c);
			
		}
		
		matrix operator /(matrix b)
		{
			class matrix c;
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++){
						c.a[i][j]=a[i][j]/b.a[i][j];
						}
				}
				return(c);
	}
		
		matrix operator %(matrix b)
		{
			class matrix c;
				for(int i=0;i<m;i++)
				{
					for(int j=0;j<n;j++){
						c.a[i][j]=a[i][j]%b.a[i][j];}
				}
				return(c);
		}
		
		void display()
		{
			cout<<"the value is";
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++)
			cout<<a[i][j]<<"\t";
			cout<<"\n";}
		}
};

int main()
{
	cout<<"enter the no of rows and columns:-\t";
	cin>>m>>n;
	class matrix l,b,c;
	int d[m*n],e[m*n];
	cout<<"enter the value of matrix 1\n";
	for(int i=0;i<m*n;i++)
	cin>>d[i];
	l=d;
	cout<<"enter the value of matrix 2\n";
	for(int i=0;i<m*n;i++)
	cin>>e[i];
	b=e;
	c=b+l;
	c.display();
		c=b-l;
	c.display();
		c=b*l;
	c.display();
		c=b/l;
	c.display();
}
