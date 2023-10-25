#include "lists.h"

/**
 * listint_len - eturns the number of elements in a linked listint_t list
 * @h: pointer to the first node.
 * Return: number of the node.
 */
size_t listint_len(const listint_t *h);
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
