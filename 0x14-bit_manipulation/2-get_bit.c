#include "main.h"
/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: number
 * @index: index within binary number
 * Return: bit 0 or 1, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int joker;
	unsigned int moush_jokers;

	moush_joker = (sizeof(unsigned long int) * 8);
	if (index > moush_joker)
		return (-1);

	joker = ((n >> index) & 1);

	return (joker);
}
