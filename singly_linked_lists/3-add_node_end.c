#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: A pointer to the pointer to the head node
 * @str: The string to be added as the new node's value
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;
    unsigned int len = 0;

    char *dup_str = strdup(str);

    if (!dup_str)
        return (NULL);

    while (dup_str[len])
        len++;

    new_node = malloc(sizeof(list_t));

    if (!new_node)
    {
        free(dup_str);
        return (NULL);
    }

    new_node->str = dup_str;
    new_node->len = len;
    new_node->next = *head;


    *head = new_node;

    return (new_node);
}