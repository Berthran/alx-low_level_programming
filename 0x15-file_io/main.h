#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
#include <unistd.h>

int _putchar(char c);

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

int close_fd(int fd);

int open_file(char *filename, int flags, int mode, int err);

int readwrite_file(int fd, char *buffer, size_t bytes,
		char *filename, int call);

#endif
