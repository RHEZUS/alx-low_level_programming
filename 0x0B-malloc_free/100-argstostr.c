#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: the number of arguments
 * @av a string of argumenrs
 */

char *argstostr(int ac, char **av)
{
	char *strArr, *str;
	int i, j, len = 0, k;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		str = av[i];
		j = 0;

		while (str[j++] != '\0')
			len++;
		len ++;
	}

	strArr = (char *)malloc((len + 1) * sizeof(char));
	if (strArr == NULL)
		return(NULL);
	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		str = av[i];
		k = 0;
		while (str[k] != '\0')
		{
			strArr[j] = str[k];
			k++;
			j++;
		}
		strArr[j++] = '\n';
	}
	strArr[j] = '\0';

	return (strArr);


}
