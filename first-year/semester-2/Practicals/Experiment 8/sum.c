#include <stdio.h>
void cal(int *num, int *sum)
{
    while (*num > 0)
    {
        *sum += *num % 10;
        *num /= 10;
    }
}

int main()
{
    int num, sum = 0;
    printf("Enter a number:\n");
    scanf("%d", &num);
    cal(&num, &sum);
    printf("\nThe sum of digits = %d\n\n", sum);
}