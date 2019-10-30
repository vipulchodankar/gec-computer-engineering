#include<iostream>
#include<cstring>
using namespace std;
class string {
	char s[100];
	public:
		string()
		{
			strcpy(s,"_");
		}
		string(char a[])
		{
			strcpy(s,a);
		}
		bool operator ==(string a)
		{
			if(strcmp(s,a.s)==0)
			return true;
			else 
			return false;
		}
		void display()
				{
					cout<<s;
				}
		
	
}a("abc"),c("abc"),b("def"),d;
int main()
{
	cout<<(a==b)<<endl;
	cout<<(a==c)<<endl;
	
}

