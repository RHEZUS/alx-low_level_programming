#include "main.h"

/**
 * _atoi - prints the numbers in a string
 * @s: the string which contains number
 * Return: the number with sign
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int number = 0;
	char *str = s;

	while (str[i] != '\0')
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
			{
				sign = sign * (-1);
			}
		}
		else if (str[i] == ' ')
		{
			i++;
			continue;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			number = number * 10 + (str[i] - '0');
		}
		else if (number == 0)
		{
			i++;
			continue;
		}
		else
		{
			break;
		}

		i++;
	}

	return (sign * number);

}
