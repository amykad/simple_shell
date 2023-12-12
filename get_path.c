#include "shell.h"

/**
 * get_path  - get variable PATH.
 * @environment: Local environment variables.
 * Return: Value of the PATH variable.
 */
char *get_path(char **environment)
{
size_t index = 0, var = 0, path_length = 5;
char *path_value = NULL;

for (index = 0; strncmp(environment[index], "PATH=", 5); index++)
;

if (environment[index] == NULL)
return (NULL);

for (path_length = 5; environment[index][var]; var++, path_length++)
;
path_value = malloc(sizeof(char) * (path_length + 1));

if (path_value == NULL)
return (NULL);

for (var = 5, path_length = 0; environment[index][var]; var++, path_length++)
path_value[path_length] = environment[index][var];

path_value[path_length] = '\0';
return (path_value);
}
