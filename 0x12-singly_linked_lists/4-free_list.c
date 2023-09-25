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
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
