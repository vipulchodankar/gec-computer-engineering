//sum 0 to n
#include<iostream>
using namespace std;

int sum_nat(int n)
{
	if(n==1)
		return(1);
	else
		return(n+sum_nat(n-1));
}

int main()
{
	int ans,n;
	cout<<"Enter the value\n";
	cin>>n;
	ans=sum_nat(n);
	cout<<"The summation is: "<<ans;
}
