// Program to calculate volume of cylinder
#include<stdio.h>
int main(){
	float radius,height,volume;
	printf("Enter the radius & height of cylinder:\n");
	scanf("%f %f",&radius,&height);
	
	volume=3.14159*radius*radius*height;

	printf("\nThe Volume of The Cylinder = %f\n",volume);
}

