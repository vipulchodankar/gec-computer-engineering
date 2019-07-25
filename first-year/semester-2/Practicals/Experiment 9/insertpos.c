#include<stdio.h>

int main(){
    int num,arr[100],pos,i,val;
    printf("Enter number of elements:\n");
    scanf("%d",&num);

    printf("\nEnter %d Elements:\n",num);

    for(i=0;i<num;i++)
        scanf("%d",&arr[i]);

    printf("\nEnter position to insert element:\n");
    scanf("%d",&pos);

    printf("\nEnter element to be inserted:\n");
    scanf("%d",&val);

    for(i=num-1;i>=pos-1;i--)
        arr[i+1]=arr[i];

    arr[pos-1]=val;

    printf("\nFinal Array: \n");
    for(i=0;i<=num;i++)
        printf("%d ",arr[i]);
    
    printf("\n\n");
}