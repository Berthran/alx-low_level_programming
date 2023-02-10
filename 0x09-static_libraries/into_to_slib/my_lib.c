/* Filename: lib_mylib.c */
#include <stdio.h> 

void fun(void) 
{
	int a = 29;
	char* c = "H";
	float avg[2] = {2.2, 3.2};

	putchar(*c);
	printf("%d \n %f\n,", a,avg[0]);
  printf("fun() called from a static library"); 
}
