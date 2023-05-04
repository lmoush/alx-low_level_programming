#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would
 * need to flip to get from one number to another.
 * @n: number
 * @m: number2
 * Return: how many bits differ
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int moush_bits = 0;
	unsigned long int green_cat;

	green_cat = n ^ m;

	do {
		moush_bits += (green_cat & 1);
		green_cat >>= 1;
	} while
		(green_cat > 0);

	return (moush_bits);
}
