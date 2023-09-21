#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: the buffer to print
 * @size: the size of the buffer
 */

#include <stdio.h>

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (int i = 0; i < size; i += 10)
	{
		printf("%.8x ", i);
		for (int j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%.2x", (unsigned char)b[j]);
			else
				printf("  ");
			if (j % 2 == 1)
				printf(" ");
		}
		printf(" ");
		for (int j = i; j < i + 10; j++)
		{
			if (j < size)
			{
				if (b[j] >= 32 && b[j] <= 126)
					printf("%c", b[j]);
				else
					printf(".");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}
