#include "main.h"
/**
 * _sqrt_recursion - the natural square root of a number.
 * @n: the number
 * Return: the natural square root of n
 * error return -1.
 */
int _sqrt_recursion(int n)
{
	return (func_needed(n, 0));
}

/**
 * omar_needs_this - function added
 * @n: the number
 * @r: root
 * Return: the natural square root of n
 * error return -1.
 */
int func_needed(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r * r > n)
	{
		return (-1);
	}
	else
	{
		return (func_needed(n, r + 1));
	}
}
