#include "main.h"

/**
 * print_alphabet - write alphabets
 * loop that goes through alphabets
 * Return: 0 success
 */

void print_alphabet(void)
{
char ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
}
