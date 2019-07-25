#include<stdio.h>
int main(){
	int num,fact=1;
	printf("Enter number whose factorial you wish to find:\n");
	scanf("%d",&num);
	for(int i=1;i<=num;i++)
		fact*=i;
	printf("\nThe Factorial of %d is %d\n",num,fact);
}
