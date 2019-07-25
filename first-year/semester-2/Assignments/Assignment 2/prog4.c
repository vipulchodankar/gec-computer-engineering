#include<stdio.h>
int main(){
	int n,i=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	float arr[n],sum=0,avg;
	printf("\nEnter elements of array:\n");
	for(;i<n;i++){
		scanf("%f",&arr[i]);
		sum+=arr[i];
	}
	avg=sum/n;
	printf("\nAverage = %f\n",avg);
	
}
