#include "lists.h"
void first(void) __attribute__((constructor));

/**
 * first - prints message before the main function is executed
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
