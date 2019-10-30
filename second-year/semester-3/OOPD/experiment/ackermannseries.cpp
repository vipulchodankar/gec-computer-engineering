#include<iostream>
#include<cstring>
using namespace std;
int a(int m,int n){
	if(m==0)
	return n+1;
	if(n==0)
	return a(m-1,1);
	return a(m-1,a(m,n-1));
}
int main()
{
	int m,n;
	cout<<"enter the values m and n for the ackermann";
	cin>>m>>n;
	cout<<"A("<<m<<","<<n<<")="<<a(m,n)<<endl;
	

}
