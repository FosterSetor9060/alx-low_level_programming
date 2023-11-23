#include "main.h"

/**
 * get_bit - returning the value of a bit at an index in a decimal number
 * @n: number in say
 * @index: index_bit
 *
 * Return: the bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
