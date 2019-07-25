#include<stdio.h>
int main(){
    int arr[25],n,val,i;
    printf("Enter number of elements:\n");
    scanf("%d",&n);
    printf("\nEnter %d Elements:\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\nEnter element to be searched: ");
    scanf("%d",&val);
    for(i=0;i<n;i++){
        if(val==arr[i]){ 
            printf("\nElement Position = %d",i+1); 
            break; }
    }
        
}
