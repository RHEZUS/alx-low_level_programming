#include "lists.h"

/**
 * first - Apply the constructor attribute to myStartupFun() so that it
 * is executed before main()
 */
void first(void) __attribute__((constructor));

/**
 * first - prints message before the main function is executed
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
