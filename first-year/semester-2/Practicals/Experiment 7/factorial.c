#include <stdio.h>
int cal(int num)
{
    if (num >= 1)
        return (num * cal(num - 1));
    else
        return 1;
}

int main()
{
    int num, fact;
    printf("Enter a number:\n");
    scanf("%d", &num);
    fact = cal(num);
    printf("\n%d! = %d\n\n", num, fact);
}