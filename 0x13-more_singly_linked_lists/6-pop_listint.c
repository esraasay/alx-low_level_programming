#include "lists.h"

/**
 * pop_listint - pops head node of the list.
 * @head: pointer.
 *
 * Return: value.
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int s;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	s = (*head)->s;
	free(*head);
	*head = node;
	return (s);
}
