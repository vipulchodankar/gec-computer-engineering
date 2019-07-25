#include<stdio.h>
int main(){
	float x=5.0, b=5.0, a;

	a= ++x + ++b; // a=12 , x=6, b=6
	printf("A = %f\n",a);
	a= ++x - ++b; // a=0 ,x=7, b=7
	printf("A = %f\n",a);
	a= ++x * ++b; // a=64,x=8, b=8
	printf("A = %f\n",a);
	a= ++x / ++b; // a=1, x=9, b=9
	printf("A = %f\n",a);

	printf("\n");
	x=5.0, b=5.0;

	a= x++ + ++b; // a=11, x=5, b=6
	printf("A = %f\n",a);
	a= x++ - ++b; // a=-1,  x=6, b=7
	printf("A = %f\n",a);
	a= x++ * ++b; // a=56, x=7, b=8
	printf("A = %f\n",a);
	a= x++ / ++b; // a=0.888, x=8, b=9
	printf("A = %f\n",a);

	printf("\n");
	x=5.0, b=5.0;

	a= ++x + b++; // a=11, x=6, b=5 
	printf("A = %f\n",a);
	a= ++x - b++; // a=1, x=7, b=6
	printf("A = %f\n",a);
	a= ++x * b++; // a=56, x=8, b=7
	printf("A = %f\n",a);
	a= ++x / b++; // a=1.125, x=9, b=8
	printf("A = %f\n",a);

	printf("\n");
	x=5.0, b=5.0;

	a= x++ + b++; // a=10, x= 5, b=5
	printf("A = %f\n",a);
	a= x++ - b++; // a=0, x=6, b=6
	printf("A = %f\n",a);
	a= x++ * b++; // a=49, x=7,b=7
	printf("A = %f\n",a);
	a= x++ / b++; // a=1, x=8,b=8
	printf("A = %f\n",a);

}
