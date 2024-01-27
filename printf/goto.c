#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i, j, result = 0;
	char op;

	if (argc != 4)
		goto error_handling_1;

	op = *argv[2];
	i = atoi(argv[1]);
	j = atoi(argv[3]);


	switch (op)
	{
		case '+':
			result = i + j;
			break;
		case '-':
			result = i - j;
                        break;
		case '*':
			result = i * j;
                        break;
		case '/':
			result = i / j;
                        break;
		case '%':
			result = i % j;
                        break;
		default:
			goto error_handling_2;
	}
	printf("result = %d\n", result);
	return 0;

error_handling_1:
	printf("Unrecognised operator\nExpected '+', '-', '*', '/', or '%%'\n");
	printf("Expected 4 arguments\n");
	return (-1);
error_handling_2:
       return (-2);
}


