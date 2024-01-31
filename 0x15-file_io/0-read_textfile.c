#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: text file being read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print else 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t text;
	ssize_t print;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	text = read(fd, buffer, letters);
	print = write(STDOUT_FILENO, buffer, text);

	free(buffer);
	close(fd);
	return (print);

}
