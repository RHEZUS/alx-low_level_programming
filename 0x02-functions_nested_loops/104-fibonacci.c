#include <stdio.h>

/**
 * main - prints the Fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	int i;
	unsigned long num1 = 0, num2 = 1, next, num1_head;
	unsigned long num1_tail, num2_head, num2_tail, head, tail;

	for (i = 0; i <= 92; i++)
	{
		next = num1 + num2;
		printf("%lu, ", next);
		num1 = num2;
		num2 = next;
	}
	num1_head = num1 / 10000000000;
	num1_tail = num1 % 10000000000;
	num2_head = num2 / 10000000000;
	num2_tail = num2 % 10000000000;

	for (i = 93; i <= 98; i++)
	{
		head = num1_head + num2_head;
		tail = num1_tail + num2_tail;
		if (num1_tail + num2_tail > 9999999999)
		{
			head += 1;
			tail %= 10000000000;
		}

		printf("%lu%lu", head, tail);
		if (i != 98)
			printf(", ");

		num1_head = num2_head;
		num1_tail = num2_tail;
		num2_head = head;
		num2_tail = tail;
	}
	printf("\n");
	return (0);
}
