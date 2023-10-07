#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print base 10 numbers programe'
 * Return: value 0 no problem
*/

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
