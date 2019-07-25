
 #include<stdio.h>
int main(){
        printf("Enter a number: ");
        int num;
        scanf("%d",&num);
        if(num%5==0)
                printf("\n%d is divisible by 5\n",num);
	else
		printf("\n%d is not divisible by 5\n",num);
}

