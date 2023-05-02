#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list.
 * @h: list
 * Return: number of moush in list
 */

size_t listint_len(const listint_t *h)
{
	size_t num_moush = 0;

	while (h != NULL)
	{
		num_moush += 1;
		h = h->next;
	}

	return (num_moush);
}
