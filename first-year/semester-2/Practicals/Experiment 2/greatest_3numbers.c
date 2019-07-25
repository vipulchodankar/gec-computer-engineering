#include<stdio.h>
int main(){
	int num[3];
	printf("Enter 3 numbers:\n");
	scanf("%d %d %d",&num[0],&num[1],&num[2]);
	if(num[0]>num[1] && num[0]>num[2])
		printf("\n%d is greater than %d and %d\n",num[0],num[1],num[2]);
	else if(num[1]>num[2] && num[1]>num[0])
                printf("\n%d is greater than %d and %d\n",num[1],num[2],num[0]);
	else
                printf("\n%d is greater than %d and %d\n",num[2],num[0],num[1]);
}

