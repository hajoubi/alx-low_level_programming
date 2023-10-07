#include <stdio.h>

/**
 *main - Entry point
 *Description: 'a program that prints alphabets lowercase and uppercase using putchar'
 *Return: value 0 no problem
*/

int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }
    for (c = 'A'; c <= 'Z'; c++)
    {
        putchar(c);
    }
    putchar('\n');
    return (0);
}
