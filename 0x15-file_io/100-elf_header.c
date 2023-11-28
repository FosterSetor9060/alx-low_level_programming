#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void print_elf_info(int elf, char *filename);
void print_class_data_version(unsigned char *e_ident);
void print_os_abi_abi_version(unsigned char *e_ident);
void print_type_entry(int elf, unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void close_elf(int elf);
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);

/**
 * main - Entry point >ELF header program.
 * @argc: Number_ command-line arguments.
 * @argv: Array of command-line argument strings.
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char *argv[])
{
	int elf;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s <ELF file>\n", argv[0]);
		exit(1);
	}

	elf = open(argv[1], O_RDONLY);
	if (elf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	print_elf_info(elf, argv[1]);

	close_elf(elf);
	return (0);
}
/**
 * print_elf_info - Printing info from the ELF header.
 * @elf: File descriptor for ELF file.
 * @filename: Name of the ELF file.
 */
void print_elf_info(int elf, char *filename)
{
	Elf64_Ehdr *header;
	ssize_t r;

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(elf);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", filename);
		exit(98);
	}

	r = read(elf, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf(elf);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", filename);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic(header->e_ident);
	print_class_data_version(header->e_ident);
	print_os_abi_abi_version(header->e_ident);
	print_type_entry(elf, header->e_ident);

	free(header);
}
/**
 * print_class_data_version - Print class, data encoding, and version.
 * @e_ident: ELF identification bytes.
 */
void print_class_data_version(unsigned char *e_ident)
{
	print_class(e_ident);
	print_data(e_ident);
	print_version(e_ident);
}
/**
 * print_os_abi_abi_version - Print OS, ABI, and ABI version.
 * @e_ident: ELF identification bytes.
 */
void print_os_abi_abi_version(unsigned char *e_ident)
{
	print_osabi(e_ident);
	print_abi(e_ident);
}
/**
 * print_type_entry - Print ELF type and entry point.
 * @elf: File descriptor for the ELF file.
 * @e_ident: ELF identification bytes.
 */
void print_type_entry(int elf, unsigned char *e_ident)
{
	unsigned int e_type = ((Elf64_Ehdr *)e_ident)->e_type;

	print_type(e_type, e_ident);
	print_entry(((Elf64_Ehdr *)e_ident)->e_entry, e_ident);

	close_elf(elf);
}

