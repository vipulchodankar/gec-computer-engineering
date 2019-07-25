#include <stdio.h>
void gen(int num)
{
    int i = 1, f = 0, s = 1, sum = 0;
    for (; i <= num; i++)
    {
        printf("%d ", f);
        ` sum = f + s;
        f = s;
        s = sum;
    }
}

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    gen(num);
    printf("\n\n");
}