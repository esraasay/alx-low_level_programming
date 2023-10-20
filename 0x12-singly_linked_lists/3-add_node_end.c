#include "lists.h"

/**
 * add_node_end - adds a new node At the end of a linked list
 * @head: double pointer to The list_t list
 * @str: string to put in The new node
 *
 * Return: address of the New element, or NULL if It failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
 list_t *new;
 list_t *temp = *head;
 unsigned int l = 0;

 while (str[l])
 l++;

 new = malloc(sizeof(list_t));
 if (!new)
 return (NULL);

 new->str = strdup(str);
 new->l = l;
 new->next = NULL;

 if (*head == NULL)
 {
 *head = new;
 return (new);
 }

 while (temp->next)
 temp = temp->next;

 temp->next = new;

 return (new);
}

