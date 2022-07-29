#include "hash_tables.h"

/**
 * hash_table_set -  Adds an element to a hash table
 *
 * @ht: hash table you want to add or update the key/value to
 * @key: the key
 * @value: value associated with the key
 * 
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *item;
    hash_node_t *current_item;
    unsigned long int index;
    
    item = malloc(sizeof(hash_node_t));
    if (item == NULL)
        return (0);
    if (key == NULL)
        return (0);
    item->value = malloc(sizeof(char) + 1);
    item->key = malloc(sizeof(char) + 1);
    if (item->value == NULL || item->key == NULL)
    {
        free(item);
        return (0);
    }
    
    strcpy(item->value, value);
    strcpy(item->key, key);
    item->next = NULL;
    index = key_index((const unsigned char *)key, ht->size);
    current_item = ht->array[index];

    if (current_item == NULL)
        ht->array[index] = item;
    else
    {
        if (strcmp(current_item->key, key) == 0)
        {
            strcpy(ht->array[index]->value, value);
            return (1);
        }
        else
        {
            item->next = ht->array[index];
            ht->array[index] = item;
            return (1);
        }
    }

    return (1);
}
