#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current_node = h;
	size_t node_count = 0;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		node_count++;
		current_node = current_node->next;
	}

	return (node_count);
}
