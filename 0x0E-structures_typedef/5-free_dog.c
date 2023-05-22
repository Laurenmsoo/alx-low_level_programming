#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees the memory space allocated to struct dog
 * @d: pointer to the struct to free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
