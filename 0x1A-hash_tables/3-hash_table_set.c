#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (must be duplicated).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node = NULL;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    /* Calculate the index where the node should be inserted */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check for an existing key at the same index */
    if (ht->array[index] != NULL)
    {
        hash_node_t *current = ht->array[index];
        while (current != NULL)
        {
            if (strcmp(current->key, key) == 0)
            {
                /* Update the value if the key already exists */
                free(current->value);
                current->value = strdup(value);
                if (current->value == NULL)
                    return (0);
                return (1);
            }
            current = current->next;
        }
    }

    /* Create a new node for the key/value pair */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    /* Insert the new node at the beginning of the list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
