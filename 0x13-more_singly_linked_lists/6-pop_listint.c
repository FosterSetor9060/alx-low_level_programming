#include "lists.h"

/**
 * Pop_listint - the head node the linked list being deleted
 * @head: pointer to the first element in the Linked list......
 *
 * Return: the data inside the elements that was deleted,
 * or 0 for empty linked list all
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

