// Program to calculate sum of 5 subjects and calculate percentage
#include<stdio.h>
int main(){
	float subjects[5],sum=0,percentage;
	printf("Enter marks of 5 subjects:\n");	
	for(int i=0;i<5;i++){
		scanf("%f",&subjects[i]);
		sum+=subjects[i];
	}
	percentage=sum/5;

	printf("\nThe Sum of the 5 subjects = %f\nThe Percentage = %f\n",sum,percentage);
}

