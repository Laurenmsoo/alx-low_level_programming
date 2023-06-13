#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fr);

/**
 * create_buffer - creates buffer and allocates 1024 bytes.
 * @file: name of the file storing the string
 * Return: A pointer to the new file buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - close the file.
 * @fr: The file to close.
 */
void close_file(int fr)
{
	int cl;

	cl = close(fr);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fr %d\n", fr);
		exit(100);
	}
}

/**
 * main - copies the content of one file to another file.
 * @argc: arguments passed to the program.
 * @argv: pointer to the arguments passed.
 * Return: 0 on success.
 * Description:  exit code is 97 if the the argument count is incorrect.
 * exit code 98 if file _from doesnt exist.
 *  exit code 99 if file _to cant be created.
 *  exit code 100 if _to file cant be closed.
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wr = write(to, buffer, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		rd = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
