// Unsigned Binary Multiplication

#include<stdio.h>

int main() {
    printf("Enter number of bits: \t");
    int n, c, i;
    scanf("%d", &n);
    int a[n], q[n], m[n];

    printf("Enter bits of the multiplicand: \t");
    for(i=0;i<n;i++)
        scanf("%d", &m[i]);
    
    printf("Enter bits of the multiplier: \t");
    for(i=0;i<n;i++) 
        scanf("%d", &q[i]);
    
    for(i=0;i<n;i++)
        a[i]=0;
    
    int j=0;
    while(j < n){
        c=0;

        if(q[0] == 1) {
            for(i=0;i<n;i++){
                if(m[i] == 1 && a[i] == 1) {
                    if(c == 1)
                        a[i]=1;

                    else{
                         a[i]=0;
                         c=1; //changed here
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

    int k;
    k=a[0];
    for(i=0;i<n-1;i++)
        a[i]=a[i+1];

    a[n-1]=c;
    for(i=0;i<n-1;i++)
        q[i]=q[i+1];
    
    q[n-1]=k;

    printf("Cycle %d :   C: %d", j+1, c);
    printf("\tA:-");
    for(i=n-1;i>=0;i--)
        printf("%d", a[i]);
    
    printf("\t   Q:-");
    for(i=n-1;i>=0;i--)
        printf("%d", q[i]);

    printf("\n");
    j++;
    }

    printf("Answer =  ");
   for(i=n-1;i>=0;i--)
        printf("%d", a[i]);
    
    for(i=n-1;i>=0;i--)
        printf("%d", q[i]);
}