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
    hash_node_t *item;
    int i;

    for (i = 0; i < ht->size; i++)
    {
        item = ht->array[i];
        while (item != NULL)
        {
            free(item->key);
            free(item->value);
            item = item->next;
        }
        free(item);        
    }

    free(ht->array);
    free(ht);
}
