#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *@a: first number
 *@b: second number
 * Return: returns the value of x raised to the power of y.
 */

int _pow_recursion(int a, int b)
{
	if (b < 0)
	{
		return (-1);
	} else if (b == 0)
	{
		return (1);
	}
	else
	{
		return (a * _pow_recursion(a, b - 1));
	}
}
