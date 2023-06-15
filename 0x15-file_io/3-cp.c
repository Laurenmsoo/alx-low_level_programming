#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *checkopen_file - checkes if the file can open
 *@file_from: source file
 *@file_to: destination file
 *@argv: argument vector
*/
void checkopen_file(int file_from, int file_to, char *argv[])
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
 * main - checks the codes
 * @argc: arguments count
 * @argv: argument vector
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, failed_close;
	ssize_t data, w;
	char _buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
checkopen_file(file_from, file_to, argv);
data = 1024;
while (data == 1024)
{
	data = read(file_from, _buffer, 1024);
	if (data == -1)
		checkopen_file(-1, 0, argv);
	w = write(file_to, _buffer, data);
	if (w == -1)
		checkopen_file(0, -1, argv);
}
failed_close = close(file_from);
if (failed_close == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
}
failed_close = close(file_to);
if (failed_close == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
	exit(100);
}
return (0);
}
