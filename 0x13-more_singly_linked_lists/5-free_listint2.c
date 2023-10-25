#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer.
 */
void free_listint2(listint_t **head)
{
	listint_t *n, *t;

	if (!head)
		return;

	n = *head;
	while (n)
	{
		t = n
		n = n->next;
		free(t);
	}
	*head = NULL;
}
