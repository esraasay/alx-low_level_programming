#include "lists.h"

/**
 * print_listint - prints linked list elements.
 * @h: pointer to the first node.
 * Return: size of nodes.
*/
size_t print_listint(const listint_t *h);
{
	size_t e = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		e++;
	}
	return (e);
}
