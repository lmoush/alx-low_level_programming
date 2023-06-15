#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @m: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *m)
{
	size_t i;

	for (i = 0; m != NULL; i++)
	{
		printf("%d\n", m->n);
		m = m->next;
	}
	return (i);
}
