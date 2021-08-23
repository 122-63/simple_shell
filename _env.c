#include "shell.h"
/**
 * _strlen - function the returns the length of s tring
 *
 * @s: char variable to find length
 * Return: length of a string
 */
size_t _strlen_(char *s)
{
	int l;
	for (l = 0; s[l] != '\0'; l++)
		;
	return (l);
	
}

/**
 * _env - print a environment
 */
void _env(void)
{
	int i = 0;
	size_t size;

	while (environ[i] != NULL)
	{
		size = _strlen_(environ[i]);
		size = size + 1;
		write(STDOUT_FILENO, environ[i], size);
		write(STDOUT_FILENO, "\n", 1);
		i++;
		        
	}
	
}
