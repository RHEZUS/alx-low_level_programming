/**
 * _strpbrk - gets the first matching character in a string
 * @s: the initial segment
 * @accept: the substring
 * Return: the first matching character if found and null if not
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
