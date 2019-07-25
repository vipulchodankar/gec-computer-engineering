#include<stdio.h>
int main(){
	int num;
	printf("Enter number whose multiplication table you wish to see:\n");
	scanf("%d",&num);
	printf("\n");
	for(int i=0;i<=10;i++)
		printf("%d * %d = %d\n",num,i,num*i);

}
