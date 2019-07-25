#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b){
        if(a<c)
        printf("\n%d is the smallest number\n",a);
        else if(a>c)
        printf("\n%d is the smallest number\n",c);
    }
    else if(a>b)    
        printf("\n%d is the smallest number\n",b);
}