#include<stdio.h>
int main(){
	int num,ctr=0;
	printf("Enter a number:\n");
	scanf("%d",&num);
	if(num==1)
		printf("\n1 is not a prime number\n"); 

	for(int i=1;i<=(num/2);i++){
		if(num%i==0)
			ctr++;

		if(ctr>=2){
			printf("\n%d is not a prime number\n",num); 
			break;
		}
	}
	if(ctr<2 && num!=1)
		printf("\n%d is a prime number\n",num); 
}

