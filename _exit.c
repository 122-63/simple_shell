#include "shell.h"
#include <signal.h>
#define SIGNQUIT 3

void _exit_(void)
{
	pid_t pid = getpid();
	kill(pid, SIGQUIT);
	
}
