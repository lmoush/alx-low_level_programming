#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * of a listint_t linked list.
 * @head: pointer to head pointer of linked list
 * @index: nth node
 * Return: nth node, or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int f = 0;

	if (head == NULL)
		return (NULL);

	while ((f < index) && head != NULL)
	{
		head = head->next;
		f++;
	}

	if (f == index)
		return (head);

	return (NULL);
}
