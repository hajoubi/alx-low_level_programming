#include <stdlib.h>
/**
* malloc_checked - allocate memory for the specified
* @b: a pointer to the allocated
* Return: a pointer to the
*/
void *malloc_checked(unsigned int b)
{
unsigned int *c;
c = (unsigned int *) malloc (b);
if (c == NULL)

    exit (98);
return (c);
}
