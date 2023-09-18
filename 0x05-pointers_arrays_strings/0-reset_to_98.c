#include "main.h"

/**
 * reset_to_98 - uses a pointer to change the value in the momory it points to
 * @n: the the variable to which address the pointer will point
 */

void reset_to_98(int *n)
{
	int *ptr = n;
	*ptr = 98;
}

