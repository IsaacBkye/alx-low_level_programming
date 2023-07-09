#include "hash_tables.h"
/**
 * hash_table_get -  gets value associated with a key.
 * @key: string
 * @ht: the hash table you want to add or update the key/value to
 * Return: the value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tempNode;
	unsigned long int index;

	if (ht && key)
	{
		index = key_index((const unsigned char *)key, ht->size);
		if (ht->array[index])
		{
			tempNode = ht->array[index];
			while (tempNode)
			{
				if (strcmp(tempNode->key, (char *)key) == 0)
					return (tempNode->value);
				tempNode = tempNode->next;
			}
		}
	}
	return (NULL);
}
