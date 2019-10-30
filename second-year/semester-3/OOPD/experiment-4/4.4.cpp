#include<iostream>
#include<cstring>
using namespace std;
class mystring{
	char str[100];
	public:
		mystring(){
			strcpy(str,"_");
		}
		
		mystring(char a[]){
			strcpy(str,a);
		}
		mystring operator !()
		{
			for(int i=0;i<strlen(str);i++)
			{
				if(str[i]<=90)
				str[i]=str[i]+32;
				
				else
				str[i]=str[i]-32;
			}
		}
		
		void display()
		{
			cout<<str<<endl;
		}
};
int main()
{
	class mystring a;
	a="AbCd";
	a.display();
	!a;
	a.display();
}
