#include "lists.h"

/**
 * dlistint_len - count the number of nodes in the linked list
 * @moush: pointer to the beginning of a linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *moush)
{
	size_t i;

	for (i = 0; moush != NULL; i++)
		moush = moush->next;
	return (i);
}
