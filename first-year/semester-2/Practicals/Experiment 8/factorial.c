#include <stdio.h>
void cal(int *num, int *fact)
{
    for (int i = 1; i <= *num; i++)
        *fact *= i;
}

int main()
{
    int num, fact = 1;
    printf("Enter a number:\n");
    scanf("%d", &num);
    int temp = num;
    cal(&num, &fact);
    printf("\n%d! = %d\n\n", temp, fact);
}