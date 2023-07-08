#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: size of the array
 * Return: pointer to hash_table_t.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;
	hash_table_t *hashTable = NULL;

	if (size > 0)
	{
		hashTable = malloc(sizeof(hash_table_t));
		if (hashTable)
		{
			hashTable->size = size;
			hashTable->array =  malloc(size * sizeof(hash_node_t *));
			if (!hashTable->array)
			{
				for (i = 0; i < size; i++)
					hashTable->array[i] = NULL;
				free(hashTable);
			}
		}
	}
	return (hashTable);
}
