#include "hash_tables.h"

/**
 * hash_table_get -  retrieves a value associated
 * with a key from hash table
 *
 * @ht: hash table you want to look into
 * @key: the key you are looking for
 *
 * Return: The value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}

	return (NULL);
}

