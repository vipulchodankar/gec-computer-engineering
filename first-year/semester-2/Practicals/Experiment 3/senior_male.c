#include<stdio.h>
int main(){
	int age;
	char gender;
	printf("Enter your age and gender:\n");
	scanf("%d %c",&age,&gender);
	if(age>=60 && (gender=='m' || gender=='M') )
		printf("\nYou are a male senior citizen\n");
	else
		printf("\nYou do not satisy the given conditions\n");
}

