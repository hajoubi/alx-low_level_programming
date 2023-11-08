#include <stdio.h>
#include "function_pointers.h"

/**
*print_name - functions that prints a name
* @name: The name of fun
*@f: Pointer to function
*Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
