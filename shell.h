#ifndef _SHELL_H_
#define _SHELL_H_

#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stddef.h>


/**
 * noBuiltIn - command no built in
 * @command: name of command
 */
typedef struct noBuiltIn
{
	char *command;
} t_noBuiltIn;

extern char **environ;
char *_getenv(char *var_env);
char **split_string(char *buffer, const char *del);
int _strcmp(char *s1, char *s2);
char *_strcat(char *dest, char *src);

#endif
