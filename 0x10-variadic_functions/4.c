#include <stdio.h>

int main(void)
{
	const char* const f = "check";
	char *format[4] = {"c", char, "i", int};

	printf("%s\nf[0] %c\n",format[0], f[0]);


	return (0);
}
