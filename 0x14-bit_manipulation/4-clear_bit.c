#include "main.h"

/**
 * clear_bit - Sets the value of a bit at an index to 0.
 * @n: A pointer to the unsigned long int.
 * @index: The index.
 *
 * Return: 1 if successful, or -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (sizeof(n) * 8 < index)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
