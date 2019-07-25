#include<stdio.h>

void callByValue(int p){
	p=25;//In call by values we cannot alter the values of actual variables through function calls.
}

void callByReference(int *q){
	*q=100;//In call by reference we can alter the values of variables through function calls.
}

int main(){
	int a=5,b=10;
	
	callByValue(a);
	callByReference(&b);
	
	printf("%d %d",a,b);//The value of a remains the same, whereas value of b is changed.
	
}
