#include<stdio.h>
int main(){
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	if(num>0)
		printf("\n%d is >0\n",num);
	else if(num<0)
		printf("\n%d is <0\n",num);
	else
		printf("\n%d is =0\n",num);

}

