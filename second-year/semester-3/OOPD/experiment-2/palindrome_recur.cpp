#include<iostream>
#include<string.h>
using namespace std;

char save[100];
int temp=0;
int palindrome(char str[],int n)
{
	if(temp==n/2)
	{
		if(strcmp(str,save)==0)
			return(1);
		else
			return(0);
	}
	else
	{
		swap(str[temp],str[n-temp-1]);
		temp++;
		palindrome(str,n);
	}
}

int main()
{
	int n,res;
	cout<<"Enter array size: ";
	cin>>n;
	char str[n];
	cout<<"\nEnter the string: ";
	cin>>str;
	strcpy(save,str);
	res=palindrome(str,n);
	if(res==1)
		cout<<"The entered string is a palindrome";
	else
		cout<<"The entered string is not a palindrome";
}
