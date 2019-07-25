#include<stdio.h>
int main(){
	int num,sum=0;
	printf("Enter a number:\n");
	scanf("%d",&num);
	while(num>0){
		sum+=num%10;
		num/=10;		
	}
	printf("\nThe sum of digits is %d\n",sum);	
}

