#include "main.h"

/**
 * print_alphabet_x10 - write alphabets
 * nested loop to print 10 times the alphabets
 * Return: 0
 */

void print_alphabet_x10(void)
{
char ch;
int i = 0;
while (i <= 9)
{
for (ch  = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
i++;
}
}
