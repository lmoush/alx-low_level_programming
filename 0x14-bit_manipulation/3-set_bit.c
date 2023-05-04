#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int moush_bits;
	unsigned long int cat_green = 1;

	moush_bits = (sizeof(unsigned long int) * 8);
	if (index > moush_bits)
		return (-1);

	cat_green <<= index;
	*n = (*n | cat_green);

	return (1);
}
