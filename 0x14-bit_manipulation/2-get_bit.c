#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int moush_bits;

	moush_bits = (sizeof(unsigned long int) * 8);
	if (index > moush_bits)
		return (-1);

	bit = ((n >> index) & 1);

	return (bit);
}
