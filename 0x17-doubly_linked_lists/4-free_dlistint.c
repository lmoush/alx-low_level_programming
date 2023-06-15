#include "lists.h"

/**
 * free_dlistint - Free moush
 *
 * @head: struct
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *moush;

	while (head)
	{
		moush = head;
		head = head->next;
		free(moush);
	}
}
