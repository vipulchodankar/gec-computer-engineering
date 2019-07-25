// Program to swap two numbers using temporary variable
#include<stdio.h>
int main(){
	int num1,num2,temp;
	printf("Enter Two Numbers:\n");
	scanf("%d %d",&num1,&num2);

	printf("\nThe Value of Num 1 is: %d\nThe Value of Num 2 is: %d\n",num1,num2);
	
	temp=num1;
	num1=num2;
	num2=temp;

	printf("\nThe Value of Num 1 after swap is: %d\nThe Value of Num 2 after swap is: %d\n",num1,num2);
}

