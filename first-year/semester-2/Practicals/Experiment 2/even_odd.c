#include<stdio.h>
int main(){
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	if(num%2==0)
		printf("\n%d is an even number\n",num);
	else
		printf("\n%d is an odd number\n",num);
}
