#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	/* local variable definition */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	
	/*Conditional statement*/
	if (n < 0) {
		printf("%d is negative\n", n);
	}
	else if (n > 0) {
		printf("%d is positive\n", n);
	}
	else {
		printf("%d is zero\n", n);
	}
	return (0);
}
