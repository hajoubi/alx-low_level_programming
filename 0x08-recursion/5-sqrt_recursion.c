#include "main.h"

int func_needed(int n, int r);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 *
 * Return: the resulting square root
 * return -1 error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (func_needed(n, 0));
}

/**
 * func_needed - recurses to find the natural
 * square root of a number
 * @n: number to calculate the sqaure root of
 * @r: root
 *
 * Return: the resulting square root
 */
int func_needed(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (func_needed(n, r + 1));
}
