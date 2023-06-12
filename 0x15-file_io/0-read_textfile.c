#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to POSIX.
 * @filename: file to read
 * @letters: number of letters to read and print
 * Return: actual number of letters read and printed
 * return: 0 if file cant be read and printed, filename is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffr;
	ssize_t fr;
	ssize_t wr;
	ssize_t rd;

	fr = open(filename, O_RDONLY);
	if (fr == -1)
		return (0);
	buffr = malloc(sizeof(char) * letters);
	rd = read(fr, buffr, letters);
	wr = write(STDOUT_FILENO, buffr, rd);

	free(buffr);
	close(fr);
	return (wr);
}
