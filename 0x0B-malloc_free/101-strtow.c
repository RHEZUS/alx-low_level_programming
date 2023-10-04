#include "main.h"

char *util (int start,int end, char *str);
int strArraylen(char *str);

/**
 * strtow - splits a string into words.
 * @str: the string to be splitted
 * Return: a pointer to an array of string
 */
char **strtow(char *str)
{
	char **strArr;
	int i = 0, j = 0, len = 0 , start = 0, end = 0;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	len = strArraylen(str) - 1;
	strArr = (char **)malloc(len * sizeof(char *));

	if (strArr == NULL)
	{
		return(NULL);
	}

	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			start = i;
			while (str[i] != ' ')
				i++;
			end = i;
			strArr[j] = util(start, end, str);
			j++;
		}
		i++;
	}
	return (strArr);	
}


int strArraylen(char *str)
{
	int i = 0, len = 0;

	while(str[i++] != '\0')
	{
		if (str[i] == ' ' && str[i - 1] != ' ')
			len += 1;
	}
	return (len);
}

char *util (int start,int end, char *str)
{
	int i = 0, j = 0, len=0;
	char *word;
	len = (end - start) + 1;

	word = (char *)malloc(len * sizeof(char *));
	if (word == NULL)
		return (NULL);
	
	for(i = start; i < end; i++)
	{
		word[j] = str[i];
		j++;
	}

	word[end] = '\0';
	return(word);
}
