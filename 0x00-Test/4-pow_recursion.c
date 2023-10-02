#include "main.h"

/**
 * _pow_recursion - raises x to power y
 * @x: the number
 * @y: the power to which it is raised
 * Return: the x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
