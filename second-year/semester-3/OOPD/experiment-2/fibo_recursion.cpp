//fibonacci recursion
#include<iostream>
using namespace std;

int fibonacci(int n)
{
	if(n<=1)
		return(n);
	return(fibonacci(n-1)+fibonacci(n-2));
}

int main()
{
	int ans,n;
	cout<<"Enter the value\n";
	cin>>n;
	ans=fibonacci(n);
	cout<<"The value at position "<<n<<" of fibonacci series is :"<<ans;
}
