#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node.
 *
 * Return: Number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
size_t l = 0;
int d;
listint_t *temp;

if (!h || !*h)
return (0);

while (*h)
{
d = *h - (*h)->next;
if (d > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
l++;
}
else
{
free(*h);
*h = NULL;
l++;
break;
}
}

*h = NULL;

return (l);
}
