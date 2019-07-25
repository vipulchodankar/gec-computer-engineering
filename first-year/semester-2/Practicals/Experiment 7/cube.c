#include <stdio.h>
int square(int i)
{
    return (i * i * i);
}

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d^3 = %d\n", i, square(i));
    }
    printf("\n");
}