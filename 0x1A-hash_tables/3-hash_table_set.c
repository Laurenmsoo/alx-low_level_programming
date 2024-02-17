#include "hash_tables.h"
/**
 *hash_table_set - adds an element to the hash table
 *@ht: pointer to the hash
 *@key: pointer to the key
 *@value: value related to the key
 *Return: 1 if is success or 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long index, size;
hash_node_t *nxt;

if (ht  == NULL || key == NULL || value == NULL)
return (0);

size = ht->size;
index = key_index((const unsigned char *)key, size);

if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
{
ht->array[index]->value = strdup(value);
return (1);
}

nxt = malloc(sizeof(hash_node_t));

if (nxt == NULL)
return (0);

nxt->key = strdup(key);
nxt->value = strdup(value);
nxt->next = ht->array[index];
ht->array[index] = nxt;
return (1);
}
