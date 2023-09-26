#include "lists.h"

/**
 * get_nodeint_at_index -  In a linked list, node element is always returned
 * @head: initial node in the linked list
 * @index: return the index of the node
 *
 * Return: pointer to the node in question, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *temp = head;

	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}

	return (temp ? temp : NULL);
}



