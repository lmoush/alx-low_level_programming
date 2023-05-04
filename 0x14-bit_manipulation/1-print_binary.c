#include "main.h"
#include <stdio.h>
/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: unsigned int
 * Return: binary
 */
void print_binary(unsigned long int n)
{

	unsigned long int d_lmoush = n, hoho = 1;
	int len = 0;

	while (d_lmoush > 0)
	{
		len++;
		d_lmoush >>= 1;
	}
	len -= 1;

	if (len > 0)
		hoho = hoho << len;

	while (hoho > 0)
	{
		if (n & hoho)
			_putchar('1');
		else
			_putchar('0');

		hoho >>= 1;
	}
}
