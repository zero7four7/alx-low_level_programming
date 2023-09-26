#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * @head: Pointer to the address
 * @n: Integer for the new node to contain.
 *
 * Return: Fails - NULL. Otherwise - new element address.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
