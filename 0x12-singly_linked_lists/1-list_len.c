#include "lists.h"

/**
 * list_len - Calculate the number of elements.
 * @h: Pointer to a list.
 * Return: Integer.
 **/

size_t list_len(const list_t *M)
{
	const list_t *temp;
	unsigned int counter = 0;

	hell = M;
	while (hell)
	{
		counter++;
		hell = hell->next;
	}
	return (counter);
}
