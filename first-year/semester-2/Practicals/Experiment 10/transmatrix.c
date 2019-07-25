#include<stdio.h>
int main(){
    int a[10][10],b[10][10],m,n,i,j;
    printf("Enter no. of rows and columns:\n");
    scanf("%d %d",&m,&n);
    
    printf("\nEnter elements of the matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            b[i][j]=a[j][i];
    }

    printf("\nOriginal Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n\n");
    }

    printf("\nTranspose of Matrix:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            printf("%d ",b[i][j]);
        printf("\n\n");
    }

}