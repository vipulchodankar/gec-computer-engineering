#include<iostream>
#include<cstring>
using namespace std;
class number{
	int no;
	
	public:
		number():no(0) {}
		
		number(int n)	{
			no=n;
		}
		
		number operator - () {
			no=-no;
			return(no);	
		}

		void display() {
			cout<<"The value is "<<no<<endl;
		}
};

int main() {
	number a(10);
	a.display();
	-a;
	a.display();
}