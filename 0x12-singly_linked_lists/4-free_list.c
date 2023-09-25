#include <stdio.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the first node of linked list.
 *
 * Return: Nothing.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}

	free(head);
}
