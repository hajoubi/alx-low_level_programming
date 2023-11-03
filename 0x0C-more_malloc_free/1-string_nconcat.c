#include <stdlib.h>
/**
* string_nconcat - string concatenation function
* @s1: string to concatenate
* @s2: string to concatenate
* @n: number of characters to concat
* Return: concat string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;

	unsigned int i = 0;

	char *concat;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;

	if (len2 < n)
		n = len2;

	concat = (char *)malloc(sizeof(char) * (len1 + n + 1));

	if (concat == NULL)
		return (NULL);

	while (i < len1 + n)
	{
		if (i >= len1)
			concat[i] = s2[i - len1];
		else
			concat[i] = s1[i];
		i++;
	}
	concat[i] = '\0';
	return (concat);
}
