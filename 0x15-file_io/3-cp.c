#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * can_open_file - checkes whether the file can open
 * @file_from: file to copy the content from
 * @file_to: file to copy the content to
 * @argv:arguments vector
 */
void can_open_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Can't write to %s\n", argv[2]);
exit(99);
}
}

/**
 * main - main function
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
int file_from, file_to, cant_close;
ssize_t data, _write;
char _buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
data = 1024;
while (data == 1024)
{
	data = read(file_from, _buffer, 1024);
	if (data == -1)
	can_open_file(-1, 0, argv);
	_write = write(file_to, _buffer, data);
	if (_write == -1)
	can_open_file(0, -1, argv);
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
