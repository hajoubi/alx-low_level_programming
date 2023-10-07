#include <stdio.h>
/**
 *main - Entry point
 *Description: 'a program that prints alphabets lower case using putchar'
 *Return: value 0 no problem
*/
int main(void)
{
    char c;

    for (c = 'a'; c <= 'z'; c++)
    {
        putchar(c);
    }
    putchar('\n');
    return (0);
}
