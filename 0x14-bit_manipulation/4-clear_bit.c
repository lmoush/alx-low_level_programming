#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int moush_bits;
	unsigned long int green_cat = 1;

	moush_bits = (sizeof(unsigned long int) * 8);
	if (index > moush_bits)
		return (-1);

	green_cat = ~(green_cat << index);
	*n = (*n & green_cat);

	return (1);
}
