#include "hash_tables.h"

/**
 * hash_djb2 - gjgug hhhdkd orithm.
 * @str: Tfh ytutu gfjyju
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int x;

	hash = 5381;
	while ((x = *str++))
		hash = ((hash << 5) + hash) + x; /* hash * 33 + x */

	return (hash);
}
