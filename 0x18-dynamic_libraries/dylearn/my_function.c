#include <stdio.h>
#include <stdlib.h>


int abs(int a)
{
	int b;
	if (a < 0)
		b = a * -1;
	printf("the absolute value of %d is %d\n", a, b);
	return (0);
}


int odd(void)
{
	int b;
	printf("Enter a number: ");
	scanf("%d", &b);
	if (b % 2 != 0)
	{
		printf("%d is an odd number\n", b);
		return (1);
	}
	printf("%d is an even number\n", b);
	return (0);
}

int main(void)
{
	int a = -10;
	int b = 3;

	abs(a);
	odd();
	return (0);
}

