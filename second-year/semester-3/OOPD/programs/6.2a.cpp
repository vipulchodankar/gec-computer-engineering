#include<iostream>
#include<cstring>
using namespace std;
class String
{
	char*str;
	int length;
	public:
	String()
	{
		length=0;
		str=new char[length+1];
	}
	String(char*x)	
	{
		length=strlen(x);
		str= new char[length+1];
		strcpy(str, x);
	}
	void concat(String &x,String &y)
	{
		length=x.length +y.length;
		delete str;
		str=new char[length+1];
		strcpy(str,x.str);
		strcat(str, y.str);
	}
	void disp()
	{
		cout<<"\nlength is:"<<length;
		cout<<"\nstring is:"<<str;
	}
};
int main()
{
	char s1[30],s2[40];
	gets(s1);
	gets(s2);
	String st,s(s1),t(s2),u,v;
	u.concat(s,t);
	u.disp();
}
