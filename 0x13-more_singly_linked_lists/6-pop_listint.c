#include "lists.h"

/**
 * pop_listint - pops head node of the list.
 * @head: pointer.
 *
 * Return: value.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
int a;

if (!head || !*head)
return (0);

a = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (a);
}

