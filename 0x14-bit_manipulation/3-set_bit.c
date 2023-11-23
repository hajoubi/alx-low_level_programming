#include "main.h"

/**
 * set_bit - Sets the value of a bit at an index to 1.
 * @n: A pointer to the unsigned long int to modify.
 * @index: The index .
 *
 * Return: 1 if successful, or -1  error.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
