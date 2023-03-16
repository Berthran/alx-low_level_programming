#include <stdio.h>
#include <stdlib.h>

int main(int argc,  char *argv[])
{
	int number;
	number = atoi(argv[1]);

	printf("Divisor = %d\n", number / 10);
	printf("Modulus = %d\n", number % 10);
	return (0);
}
