#include "lists.h"

/**
 * find_listint_loop - FInds the loopd contained in a listint_t linked list.
 * @head: Pointer to the head of listint_t list.
 *
 * Return: No loop - NULL Otherwise - node address
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tortoise = head->next;
	hare = (head->next)->next;

	while(hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (NULL);
}
