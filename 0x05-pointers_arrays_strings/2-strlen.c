/**
 * _strlen - returns the length of the string
 * @s: string to check the length
 * Return: length of the string on success
 */
int _strlen(char *s)
{
	int slen = 0;

	while (*s != '\0')
	{
		slen++;
		s++;
	}
	return (slen);
}
