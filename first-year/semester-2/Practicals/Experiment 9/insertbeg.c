#include<stdio.h>

int main(){
    int num,arr[100],i,val;
    printf("Enter number of elements:\n");
    scanf("%d",&num);

    printf("\nEnter %d Elements:\n",num);

    for(i=0;i<num;i++)
        scanf("%d",&arr[i]);

    printf("\nEnter element to be inserted at the beginning:\n");
    scanf("%d",&val);

    for(i=num-1;i>=0;i--)
        arr[i+1]=arr[i];

    arr[0]=val;

    printf("\nFinal Array: \n");
    for(i=0;i<=num;i++)
        printf("%d ",arr[i]);
    
    printf("\n\n");
}