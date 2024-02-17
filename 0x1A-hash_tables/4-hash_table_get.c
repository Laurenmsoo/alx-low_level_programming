#include "hash_tables.h"
/**
 *hash_table_get - function that retrieves a value associated with a key
 *
 *@ht: hash table pinter
 *@key: the key to retrieve
 *
 *Return: the value associated with the element else NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *nodee;
unsigned long int index;

if (key == NULL || ht == NULL)
return (NULL);

index = key_index((const unsigned char *)key, ht->size);
nodee = ht->array[index];

for (; nodee != NULL; nodee = nodee->next)
{
if (strcmp(nodee->key, key) == 0)
return (nodee->value);
}
return (NULL);
}
