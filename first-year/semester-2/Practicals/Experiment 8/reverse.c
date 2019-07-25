#include <stdio.h>
void cal(int *num, int *rev)
{
    while (*num > 0)
    {
        *rev = (*rev) * 10 + *num % 10;
        *num /= 10;
    }
}

int main()
{
    int num, rev = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    cal(&num, &rev);
    printf("\nThe reversed number = %d\n\n", rev);
}