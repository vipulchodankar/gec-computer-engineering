#include<stdio.h>
int main(){
	int num, opt;
	printf("\nEnter a number: ");
	scanf("%d",&num);
	printf("\n Options:\n1.Check if number is divisible by 10\n2.Check if number is divisible by 2\nEnter: ");
	scanf("%d",&opt);
	switch(opt){
		case 1: {
			if(num%10==0)
				printf("\n%d is divisible by 10.\n",num);
			else
				printf("\n%d is not divisible by 10.\n",num);
			break;
		}
		case 2: {
			if(num%2==0)
				printf("\n%d is divisible by 2.\n",num);
			else
				printf("\n%d is not divisible by 2.\n",num);
			break;
		}
		default: printf("\nPlease enter a valid option\n"); break;
	}
}
