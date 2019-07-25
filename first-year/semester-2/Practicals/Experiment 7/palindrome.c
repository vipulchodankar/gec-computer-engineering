#include <stdio.h>
int chk(int num)
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
    int num, rev;
    printf("Enter a number:\n");
    scanf("%d", &num);
    rev = chk(num);
    if (num == rev)
        printf("\n%d is a palindrome\n\n", rev);
    else
        printf("\n%d is not a palindrome\n\n", rev);
}