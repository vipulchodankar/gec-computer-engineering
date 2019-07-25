#include<stdio.h>
int main(){
	int f=0,s=1,sum=0,num,i=0;
	printf("Enter a number:\n");
	scanf("%d",&num);
	while(f<=num){
		if(num==f)
			{
				printf("\n%d exists in the fibonacci series\n",num);
				i=1; 
				break;	
			}
		sum=f+s;
		f=s;
		s=sum;
	}
	if(!i)
		printf("\n%d does not exists in the fibonacci series\n",num);
}
