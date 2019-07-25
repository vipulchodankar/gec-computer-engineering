#include<stdio.h>
int main()
{
	int even=0,odd;
	for(int i=1;i<=100;i++){
		if(i%2==0)
			even++;
	}
	odd=100-even;
	printf("Number of Odd Numbers between 1-100 are %d\nNumber of Even Numbers between 1-100 are %d\n",odd,even);
		
}

