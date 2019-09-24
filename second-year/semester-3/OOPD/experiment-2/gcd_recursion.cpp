//recursive gcd
#include<iostream>
using namespace std;

int gcd(int x,int y)
{
	if(x==y)
		return(x);
	else if(y<x)
		gcd(x-y,y);
	else
		gcd(x,y-x);
}
int main()
{
	int ans,i,j;
	cout<<"Enter the two values\n";
	cin>>i>>j;
	if(i<=j)
		ans=gcd(i,j);
	else
		ans=gcd(j,i);
	cout<<"The Greatest Common Factor is: "<<ans;	
}
