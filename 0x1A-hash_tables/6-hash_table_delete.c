#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table.
 * @ht: the hash table to be printed
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tempNode, *tempNode_;
	unsigned long int index;

	if (ht && ht->array)
	{
		for (index = 0; index < ht->size; index++)
		{
			tempNode = ht->array[index];
			while (tempNode)
			{
				tempNode_ = tempNode->next;
				free(tempNode->key);
				free(tempNode->value);
				free(tempNode);
				tempNode = tempNode_;
			}
		}
		free(ht->array);
	}
	free(ht);
}
