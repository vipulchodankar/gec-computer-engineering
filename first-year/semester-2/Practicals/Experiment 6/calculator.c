#include <stdio.h>
int main()
{
	int a, b, res;
	char opt;
	printf("Enter 2 numbers:\n");
	scanf("%d %d", &a, &b);
	printf("\nEnter operator:\n");
	scanf("%c %c", &opt, &opt);
	switch (opt)
	{
	case '+':
		res = a + b;
		break;
	case '-':
		res = a - b;
		break;
	case '*':
		res = a * b;
		break;
	case '/':
		res = a / b;
		break;
	case '%':
		res = a % b;
		break;
	default:
		printf("\nEnter valid operators only\n");
	}
	printf("\nThe result = %d\n", res);
}
