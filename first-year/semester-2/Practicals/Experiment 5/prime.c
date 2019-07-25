#include<stdio.h>
int main(){
	int num,i=1,ctr=0;
	printf("Enter number:\n");
	scanf("%d",&num);
	while(i<=num){
		if(num%i==0)
			ctr++;			
		i++;
	}
	if(ctr==2)
		printf("\n%d is a prime number!\n",num);
	else
		printf("\n%d is not a prime number!\n",num);
}
