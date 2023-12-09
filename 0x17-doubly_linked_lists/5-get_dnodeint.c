#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: Pointer to the head of the doubly linked list
 * @index: Index of the node to be returned
 * Return: The nth node or NULL if it does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *current;

	current = head;
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	return (current);
}
