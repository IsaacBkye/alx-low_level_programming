#include "hash_tables.h"
/**
 * hash_table_set - adds element to the hash table.
 * @key: string
 * @value:  string
 * @ht: the hash table you want to add or update the key/value to
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned long int index;

	newNode = malloc(sizeof(hash_node_t));
	if (ht && key && (value != NULL) && newNode)
	{
		index = key_index((const unsigned char *)key, ht->size);
		newNode->key = strdup(key);
		newNode->value = strdup(value);
		newNode->next = ht->array[index];
		ht->array[index] = newNode;
		return (1);
	}
	return (0);
}
