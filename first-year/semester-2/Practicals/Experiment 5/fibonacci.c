#include<stdio.h>
int main()
{
	int n,f=0,s=1,sum=0;
	printf("Enter number of terms:\n");
	scanf("%d",&n);
	printf("\n");
	for(int i=1;i<=n;i++){
		printf("%d ",f);	
		sum=f+s;
		f=s;
		s=sum;
	}
	printf("\n");
}
