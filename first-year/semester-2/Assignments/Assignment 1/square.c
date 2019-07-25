#include<stdio.h>

int square(int n){
	int sq=n*n;
	printf("\nThe square of %d is %d",n,sq);
}

int main(){
	int n;
	printf("Enter Number:\n");
	scanf("%d",&n);
	square(n);
	
}
