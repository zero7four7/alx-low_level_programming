#include "lists.h"

/**
 * get_nodeint_at_index - Locates node
 * @head: Pointer to the head of list
 * @index: Index of node to locate
 *
 * Return: Does not exist - NULL. Otherwise  - Locate node.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
