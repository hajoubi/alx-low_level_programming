#include "lists.h"

/**
 * listint_len - returns the number of elements in a listint_t list
 * @h: head pointer
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
