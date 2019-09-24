//tower of hanoi
#include<iostream>
using namespace std;

void toh(int n,char from,char to,char aux)
{
	if(n==1)
	{
		cout<<"Move Disc 1 from Tower "<<from<<" to Tower "<<to<<"\n";
		return;
	}
	toh(n-1,from,aux,to);
	cout<<"Move Disc "<<n<<" from Tower "<<from<<" to Tower "<<to<<"\n";
	toh(n-1,aux,to,from);
}

int main()
{
	int n;
	cout<<"Enter the number of discs\n";
	cin>>n;
	toh(n,'A','C','B');	
}
