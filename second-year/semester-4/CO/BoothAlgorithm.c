// Booth's Algorithm

#include<stdio.h>

int main() {
    printf("Enter number of bits:\t");
    int i, n, q1=0;
    scanf("%d", &n);
    int a[n], q[n], m[n];
    printf("Enter bits of the multiplicand:\t");
    for(i=n-1;i>=0;i--)
        scanf("%d", &m[i]);
    
    printf("Enter bits of the multiplier:\t");
    for(i=n-1;i>=0;i--)
        scanf("%d", &q[i]);
    
    for(i=0;i<n;i++)
        a[i]=0;
    
    int j=0, c;
    while(j<n){

    if(q[0] == 1 && q1 == 0)  {
        c=0;
        for(i=0;i<n;i++) {
            if(m[i] == 1 && a[i] == 1||m[i] == 0 && a[i] == 0) {
                if(c == 1)
                    a[i]=1;
                else {
                     a[i]=0;
                     if(m[i] == 1)
                     c=1;
                }
            }
            else if(m[i] == 0 && a[i] == 1) {
                if(c == 1){
                    a[i]=0;
                    c=0;
                }
                else
                    a[i]=1;
            } else {
                if(c == 1)
                a[i]=0;

                else{
                    a[i]=1;
                    c=1;
                }
            }
    }
    }
    else if(q[0] == 0 && q1 == 1)
    {
         c=0;
        for(i=0;i<n;i++) {
        if(m[i] == 1 && a[i] == 1) {
            if(c == 1)
                a[i]=1;
            else {
                 a[i]=0;
                 c=1; //Changed here
            }
        }
        else if(m[i] == 0 && a[i] == 0) {
            if(c == 1) {
                a[i]=1;
                    c=0;
                }
                else
                    a[i]=0;
            }
            else {
                if(c == 1) {
                    a[i]=0;
                    c=1;
                }
                else
                    a[i]=1;
            }
        }
    }
    int k, x;
    k=a[0];
    for(i=0;i<n-1;i++)
        a[i]=a[i+1];
    
    x=q[0];
    for(i=0;i<n-1;i++)
        q[i]=q[i+1];
    
    q1=x;
    q[n-1]=k;

    printf("Cycle %d :   A: ",  j+1);
    for(i=n-1;i>=0;i--)
        printf("%d", a[i]);
    
    printf("\tQ:-");
    for(i=n-1;i>=0;i--)
        printf("%d", q[i]);
    
    printf("\t  Q[-1]:-%d", q1);
    printf("\n");
    j++;
    }
    printf("Answer = ");
    for(i=n-1;i>=0;i--)
        printf("%d", a[i]);
    
    for(i=n-1;i>=0;i--)
        printf("%d", q[i]);
    
    printf("\n\n");
}