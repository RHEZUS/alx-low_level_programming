#include "main.h"

/**
 * _abs - prints the absolute value of a number
 * @num: the number which absolutu value will be printed
 * Return: the absolute value
 */

int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		return ((-1) * num);
	}
}
