#include<stdio.h>
int main(){
	int a,b,c,greatest;
	printf("Enter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	greatest=( (a>b)?( (a>c)?a:c):( (b>c)?b:c) );
	printf("\n%d is the greatest number.\n",greatest);
}

