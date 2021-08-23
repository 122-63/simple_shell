#include "shell.h"

char **split_string(char *buffer, const char *del)
{
	char **tokens;
	char *token;
	int index;

	tokens = malloc(64 * sizeof(char *));
	if (tokens == NULL)
	{
		free(tokens);
		perror("Error: ");
		exit(99);
	}
	token = strtok(buffer, del);
	index = 0;
	while (token != NULL)
	{
		tokens[index] = token;
		token = strtok(NULL, del);
		index++;
	}
	tokens[index] = NULL;
	return (tokens);
}
