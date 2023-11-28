#ifndef MAIN_H
#define MAIN_H
#define BUFFER_SIZE 1024

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdbool.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void error_and_exit(int exit, const char *format, ...);
int main(int argc, char *argv[]);

#endif
