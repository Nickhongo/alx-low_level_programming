#include "main.h"
/**
 * print_elf_header_info - prints header info
 * @header: header
 * Return: 0
 */
void print_elf_header_info(Elf64_Ehdr *header) 
{
	int i;
	printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; ++i) 
    {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\nClass:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("OS/ABI:                            %s\n", header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
    printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("Type:                              %s\n", header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
    printf("Entry point address:               %#lx\n", (unsigned long)header->e_entry);
}
/**
 * main - main entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd;
	ssize_t n;
	Elf64_Ehdr header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }
    fd = open(argv[1], O_RDONLY);

    if (fd == -1) {
        perror("Error opening file");
        return 98;
    }


    n = read(fd, &header, sizeof(header));
    if (n == -1) {
        perror("Error reading file");
        close(fd);
        return 98;
    }

    if (n != sizeof(header) || memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        fprintf(stderr, "Not an ELF file\n");
        close(fd);
        return 98;
    }

    print_elf_header_info(&header);

    close(fd);
    return 0;
}
