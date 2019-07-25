// Program to input distance between two cities in km. and convert to meters and centimeters
#include<stdio.h>
int main(){
	float distance,meters,centimeters;
	printf("Enter the distance between two cities in km:\n");
	scanf("%f",&distance);

	meters=distance*1000;
	centimeters=meters*100;

	printf("\nThe Distance in meters= %f\nThe Distance in cenimeters= %f\n",meters,centimeters);
}

