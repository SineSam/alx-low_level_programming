#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * apprend_text_to_file - appends text at the end of a file
 * @filename: pointer to file to be appended
 * @text_content: pointer to string to append
 * Return: 1 on success, -1 if file fails or filename is NULL or
 * file does not have required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
