#include "lists.h"

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 */
struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
};

typedef struct dlistint_s dlistint_t;

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: Pointer to the pointer to the head of the doubly linked list
 * @n: Value to be stored in the new node
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}
