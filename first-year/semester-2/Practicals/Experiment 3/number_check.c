#include<stdio.h>
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num>100 && num%2==0)
		printf("\n%d is greater than 100 and even.\n",num);
	else
		printf("\n%d does not satisy given condition.\n",num);
}
