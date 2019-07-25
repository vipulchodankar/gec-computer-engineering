#include<stdio.h>
int main(){
	int num1,num2;
	printf("Enter 2 numbers:\n");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
		printf("\n%d>%d\n",num1,num2);
	else if(num1<num2)
		 printf("\n%d<%d\n",num1,num2);
	else
                printf("\n%d=%d\n",num1,num2);

}

