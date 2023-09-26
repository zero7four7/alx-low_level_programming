#include "lists.h"
#include <stdio.h>

/**
 * listint_len - prints the number of elements in listint_t list
 * @h: constant pointer typr list_t
 *
 * Return: Number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
