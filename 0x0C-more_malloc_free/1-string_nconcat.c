#include <stdlib.h>
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
* string_nconcat - string concatenation function
* @s1: string to concatenate
* @s2: string to conc
* @n: number of characters to concat
* Return: string concatenation function
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concat;
    int size1;
    int size2;
    int i;
    int j;
    size1 = _strlen(s1);
    size2 = _strlen(s2);
    if(((unsigned int)size2) <= n)
    {
        concat=(char *)malloc(size2 * sizeof(char)+1);
        if(concat == NULL)
        
            return(NULL);
        
        for(i = 0; i < size2; i++)
        {
            concat[i] = s2[i];
        }
        return(concat);            
    }
    if(s1==NULL)
    {
        s1="";
        concat=(char *)malloc(size2 * sizeof(char)+1);
        if(concat == NULL)
        {
            return(NULL);
        }
        for(i = 0; i < size2; i++)
        {
            concat[i] = s2[i];
        }
    }
    else if(s2 == NULL)
    {
        concat=(char*)malloc(size1 * sizeof(char)+1);
        s2="";
        if(concat == NULL)
        {
            return(NULL);
        }
        for(i = 0; i < size1; i++)
        {
            concat[i] = s1[i];
        }
    }
    else if (s1 == NULL && s2 == NULL)
    {
        return (NULL);
    }
    else
    {
        
        concat=(char*)malloc((size1 * sizeof(char) + 1) + (size2 * sizeof(char)+1));
        if(concat == NULL)
        {
            return(NULL);
        }
        for(i = 0; i < size1; i++)
        {   
            concat[i] = s1[i];
            
        }
        for(j = 0; j < size2; j++)
        {   
            
            concat[i] = s2[j];
            i++;
        }
    }
    concat[i] ='\0';
    return(concat);    
}
    
