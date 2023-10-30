#include "main.h"
/**
*read_textfile - function read a file and print it out to the poxi
*
*@filename: the name of the file we will read
*
*@letters: the letters in the file
*
*Return: the number of the letters or 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int cat;
ssize_t reading, writing;
char *kitty;
	if (filename == NULL)
		return (0);
	cat = open(filename, O_RDONLY);
	if (cat == -1)
		return (0);
kitty = malloc(sizeof(char) * letters);
	if (kitty == NULL)
{
		close(cat);
		return (0);
}
reading = read(cat, kitty, letters);
	if (reading == -1)
{
		free(kitty);
		close(cat);
		return (0);
}
writing = write(STDOUT_FILENO, kitty, reading);
	if (writing == -1 ||
			writing != reading)
{
		free(kitty);
		close(cat);
		return (0);
}
	free(kitty);
	close(cat);
	return (writing);
}
