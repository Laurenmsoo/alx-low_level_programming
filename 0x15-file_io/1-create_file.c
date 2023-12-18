#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: 1 on success.
 * return: - 1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fdef, wrt, slen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (slen = 0; text_content[slen];)
			slen++;
	}

	fdef = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(fdef, text_content, slen);

	if (fdef == -1 || wrt == -1)
		return (-1);

	close(fdef);

	return (1);
}
