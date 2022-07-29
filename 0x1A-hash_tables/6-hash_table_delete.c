#include "hash_tables.h"

/**
 * hash_table_delete -  deletes a hash table
 *
 * @ht: The hash table to delete
 *
 * Return: NULL;
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item, *temp;
	hash_table_t *head = ht;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			item = ht->array[i];

			while (item != NULL)
			{
				temp = item->next;
				free(item->key);
				free(item->value);
				free(item);
				item = temp;
			}
		}
	}

	free(head->array);
	free(head);
}

