#include <stdlib.h>

/**
* create_array - creates an array of chars, and initializes it
* @size: the size of array
* @c: the initials var
*
* Return: ptr.
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *ptr;
ptr = (char *)malloc(size * sizeof(char));
if (size == 0)
	return (NULL);
if (!ptr)
	return (NULL);
for (i = 0 ; i < size ; i++)
{
    ptr[i] = c;
}
return (ptr);
}
