#include "main.h"

int the_prime(int n, int f);

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (the_prime(n, n - 1));
}

/**
 * the_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @f: iter
 *
 * Return: 1 if n is prime, 0 if not
 */
int the_prime(int n, int f)
{
	if (f == 1)
		return (1);
	if (n % f == 0 && f > 0)
		return (0);
	return (the_prime(n, f - 1));
}
