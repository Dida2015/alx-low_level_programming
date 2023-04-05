#include <stdlib.h>
#include "lists.h"
/*
 * int sum_listint: function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * Return: 0 if the list is empty
 * otherwise  - sum of all data
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
