#include<stdio.h>
int main(){
	int num,onum,rev=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	onum=num;
	while(num>0){
		rev=rev*10+num%10;
		num/=10;
	}
	if(onum==rev)
		printf("\n%d is a palindrome.\n",onum);
	else
		printf("\n%d not is a palindrome.\n",onum);
}
