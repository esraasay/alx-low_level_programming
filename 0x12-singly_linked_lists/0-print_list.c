#include "lists.h"

/**
 * print_list - prints all the Elements of a linked list
 * @h: pointer to the First node to print
 *
 * Return: the Number of nodes Printed
 */
size_t print_list(const list_t *h)
{
	size_t z = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		z++;
	}

return (z);
}

