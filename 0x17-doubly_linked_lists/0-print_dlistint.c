#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_dlistint - printing all the elements of a dlistint_t list
*@h: variable pointer get list to print
*Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	size_t res = 0;
	const dlistint_t *i;

	for (i = h; i != NULL; i = i->next)
	{
		printf("%d\n", i->n);
		res++;
	}
	return (res);
}
