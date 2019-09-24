#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter array size\n";
	cin>>n;
	char str[n],temp;
	cout<<"Enter the string\n";
	cin>>str;
	/*cout<<"The string entered is\n"<<str;
	cout<<"Now be ready to check if its a palindrome or not\n";
	for(int i=0;i<=n/2;i++)
		swap(str[n-i-1],str[i]);
	cout<<"But first lets check what we've come up to\n"<<str;*/
	for(int i=0;i<=n;i++)
		cout<<str[i]<<" ";
}
