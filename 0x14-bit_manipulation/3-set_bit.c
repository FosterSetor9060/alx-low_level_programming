#include "main.h"

/**
 * set_bit - setting bit at its given index to 1
 * @n: pointer_ the number to change
 * @index: index  bit to set to 1
 *
 * Return: -1 for fail, 1 for succes
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}



