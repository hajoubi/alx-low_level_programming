#include <stdlib.h>
/**
* _calloc -  function allocates memory for an array of nmemb
* elements of size bytes each and returns a pointer to the allocated memory
* @nmemb: number of bytes to allocat
* @size: size of the array
* Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	unsigned int i;

	if ((nmemb <= 0) || (size <= 0))
		return (NULL);
	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		((char *)(p))[i] = 0;

	return (p);
}
