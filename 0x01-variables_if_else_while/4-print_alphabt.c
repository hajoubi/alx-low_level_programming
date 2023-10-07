#include <stdio.h>

/**
 * main - Entry point
 * description: 'Print all alphabet but e q, program'
 * Return: value 0 no problme
*/

int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
{
		if (i == 101 || i == 113)
		{
			continue;
		}
		putchar(i);
}

	putchar('\n');
	return (0);
}
