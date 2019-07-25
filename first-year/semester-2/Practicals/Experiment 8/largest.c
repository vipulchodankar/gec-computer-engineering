#include <stdio.h>
void largest(int *a, int *b, int *c, int *max)
{
    if (*a > *b && *a > *c)
        *max = *a;
    else if (*b > *a && *b > *c)
        *max = *b;
    else
        *max = *c;
}

int main()
{
    int a, b, c, max;
    printf("Enter 3 numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    largest(&a, &b, &c, &max);
    printf("\nLargest number is: %d\n\n", max);
}