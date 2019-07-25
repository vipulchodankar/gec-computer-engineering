#include<stdio.h>
int main()
{
	int even=0,odd=0,i=1;
	for(;i<=100;i++){
		if(i%2==0)
			even+=i;
		else
			odd+=i;
	}
	printf("Sum of Odd Numbers between 1-100 are %d\nSum of Even Numbers between 1-100 are %d\n",odd,even);
		
}
