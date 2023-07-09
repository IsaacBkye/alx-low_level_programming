#include "hash_tables.h"
/**
 * hash_table_print - prints hash table.
 * @ht: the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	char *delim;
	hash_node_t *tempNode;
	unsigned long int index;

	if (ht && ht->array)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			tempNode = ht->array[index];
			while (tempNode)
			{
				printf("%s'%s': '%s'", delim, tempNode->key, tempNode->value);
				tempNode = tempNode->next;
				delim = ", ";
			}
		}
		printf("}\n");
	}
}
