#include "lists.h"

/**
 * list_len - returns the Number of elements in a linked list
 * @h: pointer to The list_t list
 *
 * Return: Number of elements in h
 */
size_t list_len(const list_t *h)
{
 size_t s = 0;

 while (h)
 {
 s++;
 h = h->next;
 }
 return (s);
}

