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
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;
    char *dup_str;

    if (!head || !str)
        return (NULL);

    while (str[len])
        len++;

    new_node = malloc(sizeof(list_t));
    if (!new_node)
        return (NULL);

    dup_str = strdup(str);
    if (!dup_str)
    {
        free(new_node);
        return (NULL);
    }

    new_node->str = dup_str;
    new_node->len = len;f
    new_node->next = NULL;

    if (!*head)
    {
        *head = new_node;
        return (new_node);
    }

    temp = *head;
    while (temp->next)
        temp = temp->next;

    temp->next = new_node;

    return (new_node);
}
