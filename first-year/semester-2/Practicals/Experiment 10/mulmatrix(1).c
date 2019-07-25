#include<stdio.h>
int main(){
    int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k,sum=0;
    printf("Enter no. of rows and columns of Matrix 1:\n");
    scanf("%d %d",&m,&n);
    
    printf("\nEnter elements of 1st matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }

    printf("\nEnter no. of rows and columns of Matrix 2:\n");
    scanf("%d %d",&p,&q);
    
    printf("\nEnter elements of 2nd matrix:\n");
    for(i=0;i<p;i++){
        for(j=0;j<q;j++)
            scanf("%d",&b[i][j]);
    }

    if(n==p){

    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            for(k=0;k<p;k++){
                sum+=a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;
        }
    }

    printf("\nFinal Matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<q;j++)
            printf("%d ",c[i][j]);
        printf("\n\n");
    }

    }

    else{
        printf("\nThe no. of columns of matrix 1 must be equal to no. of rows of matrix 2\n\n");
    }
}
