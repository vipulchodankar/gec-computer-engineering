#include<stdio.h>
int main(){
	int num, rev=0;
	printf("Enter number:\n");
	scanf("%d",&num);
	while(num>0){
	rev=rev*10+num%10;
	num/=10;	
	}
	printf("\n%d is the reversed number\n",rev);
}
