#include "lists.h"

/**
 * pop_listint - Removes and returns
 * the first element of a linked list of integers.
 * @head: Double pointer to head.
 *
 * Return: The integer value of the removed element.
 *         If the list is empty, returns 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *h, *cur;
	int num;

	if (*head == NULL)
		return (0);

	cur = *head;

	num = cur->n;

	h = cur->next;

	free(cur);

	*head = h;

	return (num);
}
