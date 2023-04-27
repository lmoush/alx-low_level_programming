/**
 * add_node - adds a new node at hello note
 * @head: double pointer to the list_t big
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{*new;

	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = (str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
