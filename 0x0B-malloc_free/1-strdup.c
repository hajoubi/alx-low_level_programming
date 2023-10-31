#include <stdlib.h>
#include "main.h"
/**
 * _strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * _strdup - duplicates a given string.
 * @str: the string to duplicate.
 * Return: new dup.
 */


char *_strdup(char *str)
{
	char *str2;
	int size;
	int i;
	if(str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str);
	str2 = (char*)malloc(size * sizeof(char));
	if (!str2)
		return (NULL);
	for(i=0; i < size; i++)
	{
		str2[i] = str[i];
	}
	
	return (str2);
}
