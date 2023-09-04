#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to the POSIX STDOUT.
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 * Return: w- actual number of letters it could read and print
 *  return: 0 if filename is NULL,write fails or file cant be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fdef;
	ssize_t wr;
	ssize_t rd;

	fdef = open(filename, O_RDONLY);
	if (fdef == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	rd = read(fdef, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(fdef);
	return (wr);
}
