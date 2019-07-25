#include<stdio.h>
int main(){
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	if(age>=18)
		printf("\nYou are eligile to vote.\n");
	else
		printf("\nYou are not eligible to vote\n");
}
