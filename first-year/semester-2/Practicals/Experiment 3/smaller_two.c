#include<stdio.h>
int main(){
	int num1,num2,smaller;
	printf("Enter two numbers:\n");
	scanf("%d %d",&num1,&num2);
	smaller=(num1<num2?num1:num2);
	printf("\nThe smallest number is %d\n",smaller);
}
