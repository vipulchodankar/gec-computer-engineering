#include <stdio.h>
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    swap(&num1, &num2);
    printf("\nAfter swapping,\nNum1: %d\nNum2: %d\n\n", num1, num2);
}