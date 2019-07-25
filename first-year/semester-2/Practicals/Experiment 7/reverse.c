#include <stdio.h>
int reverse(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    printf("\nReversed number = %d\n\n", reverse(num));
}