#include "lists.h"

/**
 * add_node - adds a new node at The beginning of a Linked list
 * @head: double pointer to The list_t list
 * @str: new string to add in the Node
 *
 * Return: the address of the New element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int l = 0;
 
while (str[l])
l++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->l = l;
new->next = (*head);
(*head) = new;

return (*head);
}

