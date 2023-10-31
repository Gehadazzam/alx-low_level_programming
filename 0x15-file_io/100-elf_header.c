#include "main.h"
#define ELF_MAGIC "\177ELF"
void check_file(char *argv, char *magic);
/**
*check_type - to check the types of file
*@e_type: the data of the file
*Return: void
*/
void check_type(int e_type)
{
	switch (e_type)
{
		case ET_NONE:
			printf("None\n");
			break;
		case ET_REL:
			printf("Relocatable file\n");
			break;
		case ET_EXEC:
			printf("Executable file\n");
			break;
		case ET_DYN:
			printf("Shared object file\n");
			break;
		case ET_CORE:
			printf("Core file\n");
			break;
		default:
			printf("Unknown\n");
}
}
/**
*main - check the code
*@argc: the number of the arguments
*@argv: the arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
int cat = open(argv[1], O_RDONLY);
char magic[4];
Elf64_Ehdr kitty;
	if (argc != 2)
{
		dprintf(STDERR_FILENO, "Usage: %s elf_file\n", argv[0]);
		exit(98);
}
	check_file(argv[1], magic);
	if (read(cat, magic, sizeof(magic)) != sizeof(magic))
{
		perror("read");
		exit(98);
}
	if (lseek(cat, 0, SEEK_SET) != 0)
{
		perror("lseek");
		exit(98);
}
	if (read(cat, &kitty, sizeof(kitty)) != sizeof(kitty))
{
		perror("read");
		exit(98);
}
	printf("Magic: %s\n", magic);
	printf("Class: ");
	switch (kitty.e_ident[EI_CLASS])
{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Unknown\n");
}
	printf("Data: ");
	switch (kitty.e_ident[EI_DATA])
{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Unknown\n");
}
	printf("Version: %d (current)\n", kitty.e_ident[EI_VERSION]);
	printf("OS/ABI: UNIX - System V\n");
	printf("ABI Version: %d\n", kitty.e_ident[EI_OSABI]);
	printf("Type: ");
	check_type(kitty.e_type);
	printf("Entry point address: 0x%lx\n", kitty.e_entry);
	close(cat);
	return (0);
}
/**
*check_file - check if it is elf file
*@argv: the file
*@magic: seconed member
*Return: void
*/
void check_file(char *argv, char *magic)
{
int cat = open(argv, O_RDONLY);
	if (cat < 0)
{
		perror("open");
		exit(98);
}
	if (read(cat, magic, sizeof(magic)) != sizeof(magic))
{
		perror("read");
		exit(98);
}
	if (strncmp(magic, ELF_MAGIC, 4) != 0)
{
		dprintf(STDERR_FILENO, "%s Not an ELF file\n", argv);
		exit(98);
}
}
