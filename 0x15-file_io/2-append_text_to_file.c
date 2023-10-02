#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: name of the file
 * @text_content:  string to add to the end of the file.
 *
 * Return: 1 on success.
 *return: -1 on falilure
 *       */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wrt, slen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (slen = 0; text_content[slen];)
			slen++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wrt = write(op, text_content, slen);

	if (op == -1 || wrt == -1)
		return (-1);

	close(op);

	return (1);
}

