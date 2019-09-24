//prime nos
#include<stdio.h>

int prime_btw(int a, int b)
{
    if(a == b+1)
        return(0);
    else if(a == 2)
        return(1 + prime_btw(a+1, b));
    else if(a == 3)
        return(1 + prime_btw(a+1, b));
    else if(a%2!=0 && a%3!=0)
        return(1 + prime_btw(a+1, b));
    else
        return(prime_btw(a+1, b));
}


int main()
{
    int a, b;
    printf("Enter 2 values\n");
    scanf("%d%d", &a, &b);
    printf("The total no of prime numbers are : %d", prime_btw(a, b));
    return(0);
}
