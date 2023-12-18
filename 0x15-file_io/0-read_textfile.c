#include <stdlib.h>
#include "main.h"

/**
 * read_textfile- Reads a text file print it  to POSIX STDOUT.
 * @filename: name of the file being read
 * @letters: number of letters to  read
 * Return: actual number of letters read and printed
 *  return: 0 if the function fails, file name is NULL or
 * file cant be read or opened.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fdef;
	ssize_t wrt;
	ssize_t x;

	fdef = open(filename, O_RDONLY);
	if (fdef == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	x = read(fdef, buffer, letters);
	wrt = write(STDOUT_FILENO, buffer, x);

	free(buffer);
	close(fdef);
	return (wrt);
}
