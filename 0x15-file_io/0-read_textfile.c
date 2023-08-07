#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads text file and prints to the POSIX STDOUT.
 * @filename: file to be read
 * @letters: number of lettersto be read and printed
 * Return: actual number of letters it could read and print
 * return:0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fdef;
	ssize_t words;
	ssize_t txt;

	fdef = open(filename, O_RDONLY);
	if (fdef == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	txt = read(fdef, buffer, letters);
	words = write(STDOUT_FILENO, buffer, txt);

	free(buffer);
	close(fdef);
	return (words);
}
