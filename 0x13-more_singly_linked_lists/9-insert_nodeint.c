#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: pointer to head pointer of linked list
 * @idx: index to insert new node
 * @n: new node's data
 * Return: address of new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int h = 0;
	listint_t *new_node, *lkj;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (mpm == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	lkj = *head;
	while (i < (mpm - 1))
	{
		lkj = lkj->next;
		h++;

		if (lkj == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	new_node->next = lkj->next;
	lkj->next = new_node;
	return (new_node);
}
