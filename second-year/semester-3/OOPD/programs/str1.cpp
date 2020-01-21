#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	char a[50],b[4];
	cout<<"enter the string:";
	gets(a);
	int c=0;
	int k=0;
	for(int i=0;i<strlen(a);i++)
	{
		k=0;
		b[k]=a[i];
		b[k+1]=a[i+1];
		if((strcmp(b,"it")==0 || strcmp(b,"It")==0))
		{
			c++;
		}
	}
	cout<<"the number of times it occurs is:"<<c<<endl;
}






