#include "shell.h"
#include <string.h>

extern char **environ;

char *_getenv(char *var_env)
{
	int i = 0;
	char *env;

	while (environ[i] != NULL)
	{
		env = strtok(environ[i], "=");
		if (_strcmp(env, var_env) == 0)
		{
			return (strtok(NULL, "="));
		}
		i++;
	}
	return ("Error");
}#include "shell.h"
#include <string.h>

extern char **environ;

char *_getenv(char *var_env)
{
	int i = 0;
	char *env;

	while (environ[i] != NULL)
	{
		env = strtok(environ[i], "=");
		if (_strcmp(env, var_env) == 0)
		{
			return (strtok(NULL, "="));
		}
		i++;
	}
	return ("Error");
}
