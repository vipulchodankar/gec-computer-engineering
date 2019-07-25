// Program to Convert Temperature from Celcius to Farhrenheit
#include<stdio.h>
int main(){
	float celcius,fahrenheit;
	printf("Enter Temperature in celcius:\n");
	scanf("%f",&celcius);
	fahrenheit=(celcius*9/5)+32;
	printf("\nThe temperature in fahrenheit= %f\n",fahrenheit);
}	

