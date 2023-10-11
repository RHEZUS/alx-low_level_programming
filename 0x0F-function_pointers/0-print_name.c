#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to print
 * @f: the pointer to the function that will print
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
