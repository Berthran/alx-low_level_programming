#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <unistd.h>

int _putchar(char c);

char *create_array(unsigned int size, char c);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);
#endif
