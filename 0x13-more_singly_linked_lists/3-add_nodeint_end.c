#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: A pointer to the head pointer of the list
 * @n: The value to be added to the new node
 *
 * Return: A pointer to the newly added node, or NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n);
{

	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tmp = *head;

		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (new_node);
}
