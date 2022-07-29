#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
<<<<<<< HEAD
	hash_table_t *head = ht;
	hash_node_t *node, *tmp;
=======
	hash_node_t *item, *temp;
	hash_table_t *head = ht;
>>>>>>> 634783f77201e241a080c2660f43153ab940e8cd
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
<<<<<<< HEAD
			node = ht->array[i];
			while (node != NULL)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
=======
			item = ht->array[i];

			while (item != NULL)
			{
				temp = item->next;
				free(item->key);
				free(item->value);
				free(item);
				item = temp;
>>>>>>> 634783f77201e241a080c2660f43153ab940e8cd
			}
		}
	}
	free(head->array);
	free(head);
}
