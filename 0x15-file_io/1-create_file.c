#include "main.h"
/**
*create_file - function to creat a file if it is not created
*
*@filename: the file we will create
*
*@text_content: string to write in the file
*
*Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
int cat, writing;
	if (!filename)
		return (-1);
cat = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (cat == -1)
		return (-1);
	if (text_content)
{
		writing = write(cat, text_content, strlen(text_content));
			if (writing == -1)
{
				close(cat);
				return (-1);
}
}
	close(cat);
	return (1);
}
