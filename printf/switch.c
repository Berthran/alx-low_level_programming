#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int day = 4;
	char str = 'c';

	/* switch statements can be used as singly, in a loop or with fall throughs. */
	/* Fall throughs are important when you want to share code between different cases of the switch statement */
	switch (day)
	{
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3:
			printf("Wednessday\n");
			break;
		default:
			printf("unknown day\n");
	}

	switch (str)
	{
		case 'c':
			printf("character\n");
			break;
		case 'd':
			printf("signed interger\n");
			break;
		case 'f':
			printf("floating point\n");
			break;
		default:
			printf("not recognised format specifier\n");
	}
	return (0);
}
