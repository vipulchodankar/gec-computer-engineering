//TOWER OF HANOI
#include<iostream>
using namespace std;
void toh(int,char,char,char);
int main()
{
	int n;
	cout<<"Enter the no: ";
	cin>>n;
	toh(n,'A','C','B');
}
void toh(int n,char from,char to,char aux)
{
	if(n==1)
	{
		cout<<"Move disk 1 from "<<from<<" to "<<to<<endl;
		return;
	}
	toh(n-1,from,aux,to);
	cout<<"Move disk "<<n<<" from "<<from<<" to "<<to<<endl;
	toh(n-1,aux,to,from);
}
