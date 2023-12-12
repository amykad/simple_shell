#include "shell.h"

/**
 * execute_command_alternative - function to execute a command
 * @cmd_args: array of command arguments
 * @cmd_name: name of the command (used for error message)
 * Return: return status or NULL
 */
int execute_command_alternative(char **cmd_args, char **cmd_name)
{
int index;
pid_t child_pid;
int child_status;
child_pid = fork();
if (child_pid == 0)
{
if (execve(cmd_args[0], cmd_args, environ) == -1)
{
perror(cmd_name[0]);
for (index = 0; cmd_args[index]; index++)
{
free(cmd_args[index]);
cmd_args[index] = NULL;
}
free(cmd_args);
cmd_args = NULL;
exit(0);
}
}
else
{
waitpid(child_pid, &child_status, 0);
for (index = 0; cmd_args[index]; index++)
{
free(cmd_args[index]);
cmd_args[index] = NULL;
}
free(cmd_args);
cmd_args = NULL;
}
return (WEXITSTATUS(child_status));
}
