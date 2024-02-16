#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array.
 * Return: pointer to the hash table
 * otherwise - return NULL incase of failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
        hash_table_t *htable;
        unsigned long int i;

        ht_table = malloc(sizeof(hash_table_t));
        if (htable == NULL)
                return (NULL);

        htable->size = size;
        htable->array = malloc(sizeof(hash_node_t *) * size);
        if (htable->array == NULL)
                return (NULL);
        for (i = 0; i < size; i++)
                htable->array[i] = NULL;

        return (htable);
}
