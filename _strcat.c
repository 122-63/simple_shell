#include "shell.h"
/**
 * _strlen - function the returns the length of s tring
 *
 * @s: char variable to find length
 * Return: length of a string
 */
int _strlen(char *s)
{
	int l;
	for (l = 0; s[l] != '\0'; l++)
		;
	return (l);
	
}
char *_strcat(char *dest, char *src)
{
	char *str;
	int i = 0;
	int j = 0;
	int k = 0;
	int s1;
	int s2;

	s1 = _strlen(dest);
	s2 = _strlen(src);

	str = malloc(1 + (s1 + s2) * sizeof(char));
	if (str == NULL)
	{
		free(str);
		exit(98);
		  
	}

	while (dest[i])
	{
		str[k] = dest[i];
		i++;
		k++;
		    
	}
	while (src[j])
	{
		str[k] = src[j];
		j++;
		k++;
		    
	}
	str[k] = '\0';

	return (str);
	
}
