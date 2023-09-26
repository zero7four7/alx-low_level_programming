#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list.
 * @head: Pointer 
 *
 * Return: Empty - o. Otherwise Head node's data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *popped;
	int cont;

	if (*head == NULL)
		return (0);

	popped = *head;
	cont = popped->n;
	free(popped);

	*head = (*head)->next;

	return (cont);
}
