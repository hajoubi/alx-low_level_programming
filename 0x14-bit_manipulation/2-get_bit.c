#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long int to retrieve the bit from.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at index, or -1 error .
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bits;

	if (sizeof(n) * 8 < index)
		return (-1);

	bits = n >> index;

	return (bits & 1);
}
