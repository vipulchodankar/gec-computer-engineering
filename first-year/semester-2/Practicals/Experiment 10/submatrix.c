#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],m,n,i,j;
    printf("Enter no. of rows and columns:\n");
    scanf("%d %d",&m,&n);
    
    printf("\nEnter elements of 1st matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    
    printf("\nEnter elements of 2nd matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&b[i][j]);
    }

    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            c[i][j]=a[i][j]-b[i][j];
    }

    printf("\nFinal Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",c[i][j]);
        printf("\n\n");
    }

}