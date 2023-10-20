#include "lists.h"

/**
 * free_list - frees a Linked list
 * @head: list_t list to Be freed
 */
void free_list(list_t *head)
{
list_t *temp;

while (head)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}

