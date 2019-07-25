#include<stdio.h>

int sum(int start, int end){
	int sum=0,j=1,ctr=0;
	for(;start<=end;start++){
		ctr=0;
		for(j=1;j<=start;j++){
			if(start%j==0)
				ctr++;
		}
		if(ctr==2)
			sum+=start;
	}
	printf("\nThe sum = %d",sum);
}

int main(){
	int start,end;
	printf("Enter the range:\n");
	scanf("%d %d",&start,&end);
	
	sum(start,end);
}
