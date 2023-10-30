#include "main.h"
#include <errno.h>
/**
*append_text_to_file - appened text to the end of the file
*
*@filename: the name of the file
*
*@text_content: string
*
*Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int cat, writing, length;
	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		length = strlen(text_content);
cat = open(filename, O_WRONLY | O_APPEND);
	if (cat == -1)
		return (-1);
writing = write(cat, text_content, length);
	if (writing == -1)
		return (-1);
	close(cat);
	return (1);
}
