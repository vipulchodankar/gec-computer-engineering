#include<iostream>
#include<cstring>
using namespace std;
class string {
	char s[100];
	public:
		string() {
			strcpy(s,"_");
		}
		
		string(char a[]) {
			strcpy(s,a);
		}
		
		bool operator ==(string a) {
			if(strcmp(s,a.s)==0)
			return true;
			else 
			return false;
		}

		string operator +(string a) {
			if(strlen(s)+strlen(a.s)<=0||strlen(s)+strlen(a.s)>100) {
					cout<<"Cannot add";
					return 0;
				}
				else
				{
				string c;
				strcpy(c.s,s);
				strcat(c.s,a.s);
				return c;}
		}

		void display() {
			cout<<s;
		}
}a("abc"),c("abc"),b("def"),d;

int main()
{
	cout<<(a==c);
	d=a+b;
	d.display();
}

