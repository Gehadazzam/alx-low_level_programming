#include "main.h"
#define BUFFER_kitty 1024
/**
*print_massage - print the error massage
*@text: massage to be printed
*Return: void
*/
void print_massage(const char *text)
{
	dprintf(STDERR_FILENO, "%s\n", text);
}
/**
*main - entry point
*@argc: number of arguments
*@argv: the arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
char cat[BUFFER_kitty];
ssize_t reading, writing;
int f1, f2;
const char *cat1 = argv[1], *cat2 = argv[2];
	if (argc != 3)
{
		print_massage("Usage: cp file_from file_to");
		exit(97);
}
	f1 = open(argv[1], O_RDONLY);
		if (f1 == -1)
{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", cat1);
			exit(98);
}
	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (f2 == -1)
{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", cat2);
			exit(99);
}
	while ((reading = read(f1, cat, BUFFER_kitty)) > 0)
{
		writing = write(f2, cat, reading);
			if (writing == -1)
{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", cat2);
				exit(99);
}
}
	if (reading == -1)
{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", cat1);
		exit(98);
}
	if (close(f1) == -1)
{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", cat1);
		exit(100);
}
	if (close(f2) == -1)
{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", cat2);
		exit(100);
}
	exit(0);
}
