#include "shell.h"

int _execute(char **tokens)
{
	int status_w, index = 0, s_execve, status = 0;
	char *new_path, *PATH;
	char **t_path;
	struct stat st;
	pid_t pid;

	PATH = _getenv("PATH");
	t_path = split_string(PATH, ":");
	while (t_path[index] != NULL)
	{
		if (stat(tokens[0], &st) == -1)
		{
			new_path = _strcat(t_path[index], "/");
			new_path = _strcat(new_path, tokens[0]);
			                
		}
		else
			new_path = tokens[0];
		if (stat(new_path, &st) == 0)
		{
			status = 1;
			pid = fork();
			if (pid != -1)
			{
				if (pid == 0)
				{
					s_execve = execve(new_path, tokens, NULL);
					if (s_execve == -1)
						perror("Error: ");
					                                
				}
				wait(&status_w);
				                        
			}
			else
				perror("Error: ");
			break;
			                
		}
		index++;
		        
	}
	if (status == 0)
		perror("Error ");
	return (s_execve);
	
}
