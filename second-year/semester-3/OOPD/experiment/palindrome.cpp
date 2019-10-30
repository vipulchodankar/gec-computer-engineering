#include<iostream>
#include<cstring>
using namespace std;
int palindrome(char a[],int i,int j)
{
	if(i<j){
	if(a[i]==a[j-1])
	return(0+palindrome(a,++i,--j));
	else 
	return(1) ;
}
	else
	return 0;
}
int main()
{
	char a[100];
	cout<<"enter the string:-\n";
	cin>>a;
	int k=palindrome(a,0,strlen(a));
	if(k==0)
	cout<<"It is an palindrome";
	else
	cout<<"It is not an palindrome";
}
