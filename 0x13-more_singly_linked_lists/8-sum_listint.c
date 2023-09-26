#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the date (n) of listint_t list
 * @head: Pointer to the head
 *
 * Return: List empty - 0 Otherwise - sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
