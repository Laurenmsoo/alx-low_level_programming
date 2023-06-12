#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: the string to be added at the end of the file
 * Return: 1 on success.
 * return: -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wr, slen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (slen = 0; text_content[slen];)
			slen++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wr = write(opn, text_content, slen);

	if (opn == -1 || wr == -1)
		return (-1);

	close(opn);

	return (1);
}
