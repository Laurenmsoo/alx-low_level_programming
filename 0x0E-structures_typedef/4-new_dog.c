#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcpy - copies the string pointed to by src
 * to the buffer pointed to by dest
 * @dest: pointer to the string destination
 * @src: input string
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int slen, i;

	slen = 0;

	while (src[slen] != '\0')
	{
		slen++;
	}

	for (i = 0; i < slen; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int slen1, slen2;

	slen1 = _strlen(name);
	slen2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (slen1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (slen2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
