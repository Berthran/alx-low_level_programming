#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	/* local variable definition */
	int n, ldigit;

	srand(time(0));
	n = rand() - RAND_MAX /2;
	
	/* last digit variable definition */
	ldigit = n%10;
		
	/*Conditional statement*/
	if (ldigit > 5) {
		printf("Last digit of %d is %d and is greater than 5\n", n,ldigit);
	}
	if (ldigit == 0) {
		printf("Last digit of %d is %d and is zero\n", n, ldigit);
	}
	if (ldigit < 6 && ldigit != 0) {
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
	}
	return (0);
}
