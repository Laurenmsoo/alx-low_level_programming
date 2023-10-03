#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * canopen_file - checks if the files can open
 * @file_from: file to copy from
 * @file_to: file to copy to
 * @argv: arguments vector
 */
void canopen_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
if (file_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
}
}

/**
 * main - main function
 * @argc: arguments count
 * @argv: argumentsvector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, cant_close;
	ssize_t data, wrt;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	canopen_file(file_from, file_to, argv);
	data = 1024;
	while (data == 1024)
	{
		data = read(file_from, buf, 1024);
		if (data == -1)
			canopen_file(-1, 0, argv);
		wrt = write(file_to, buf, data);
		if (wrt == -1)
			canopen_file(0, -1, argv);
	}
	cant_close = close(file_from);
	if (cant_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	cant_close = close(file_to);
	if (cant_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}

