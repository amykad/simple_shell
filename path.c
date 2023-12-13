#include "shell.h"

/**
 * _values_path - Finds the absolute path of the executable.
 * @command: User input command.
 * @environment: Environment variables.
 * Return: Pointer to the absolute path string.
 */
int values_path(char **command, char **environment)
{
char *token = NULL, *relative_path = NULL, *absolute_path = NULL;
size_t command_length, path_length;
struct stat stat_buffer;

if (stat(*command, &stat_buffer) == 0)
return (-1);

relative_path = get_path(environment); /** gets the content of "PATH=" */
if (!relative_path)
return (-1);

token = strtok(relative_path, ":"); /** tokenizes the content of "PATH=" */
command_length = _strlen(*command); /** gets length of command */

while (token)
{
path_length = _strlen(token);
absolute_path = malloc(sizeof(char) * (path_length + command_length + 2));
if (!absolute_path)
{
free(relative_path);
return (-1);
}

strcpy(absolute_path, token);
_strcat(result, "/");
_strcat(result, *command);

if (stat(result, &stat_buffer) == 0)
{

free(*command);
*command = result;
free(relative_path);
return (0);
}
free(absolute_path);
token = strtok(NULL, ":");
}
token = '\0';
free(relative_path);
return (-1);
}
