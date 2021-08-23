#include "shell.h"

char *_getenv(char *var_env)
{
	int i = 0;
	char *copy;
	char *env;

	while (environ[i] != NULL)
	{       copy = _strdup(environ[i]);
		env = strtok(copy, "=");
		if (_strcmp(env, var_env) == 0)
		{
			return (strtok(NULL, "="));
			                
		}
		i++;
	}
	return ("Error");
	
}
