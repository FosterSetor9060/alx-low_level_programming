#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*dlistint_len - returning the number of elements
*@h: variable pointing list to print
*Return: the num of nodes
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t res = 0;
	const dlistint_t *i;

	for (i = h; i != NULL; i = i->next)
	{
		res++;
	}
	return (res);
}
