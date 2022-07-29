#include "hash_tables.h"

/**
 * hash_table_print -  Prints a hash table
 *
 * @ht:  the hash table
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;
	i = 0;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");
			item = ht->array[i];
			while (item != NULL)
			{
				printf("'%s': '%s'", item->key, item->value);
				item = item->next;
				if (item != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
		i++;
	}
	printf("}\n");
}

