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
#include <elf.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
int copy_file(int fd, int fp);
void print_error(const char *message);
void print_elf_header(const Elf64_Ehdr *header);
int main(int argc, char *argv[]);
int check_elf_file(Elf64_Ehdr *hdr);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_entry_addr(Elf64_Addr e_entry);
void print_abi_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_type(unsigned short e_type);
#endif
