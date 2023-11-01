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
    if(s == NULL)
    {
        return(0);
    }
        
	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
/**
 * str_concat - concatenates two string.
 * @s1: the first string.
 * @s2: the second string.
 * Return: concat.
 */

char *str_concat(char *s1, char *s2)
{
    char *concat;
    int size;
    int i;
    int j;
    if(s1 == NULL && s2 == NULL)
    {
        return (NULL);
    }
    size= _strlen(s1) + _strlen(s2);
    concat = (char *)malloc(size * sizeof(char)+1);
    if(!concat)
        return(NULL);

    if(s1 == NULL)
    {
        for(i = 0; i < _strlen(s2); i++)
        {
            concat[i] = s2[i];
        }
    }
    else if(s2 == NULL)
    {
        for(i = 0; i < _strlen(s1); i++)
        {
            concat[i] = s1[i];
        }
    }
    else
    {   
        
        for(i = 0; i < _strlen(s1); i++)
        {   
            concat[i] = s1[i];
            
        }
        for(j = 0; j < _strlen(s2); j++)
        {   
            
            concat[i] = s2[j];
            i++;
        }
    }
    concat[i] ='\0';
    return(concat);
}
