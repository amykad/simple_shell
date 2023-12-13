#include "shell.h"

/**
 * getEnvPath - get the value of the PATH variable from the environment.
 * @environment: environment variables
 * Return: value of PATH, or NULL if not found.
 */

char *getEnvPath(char **environment)
{
size_t index = 0, varIndex = 0, pathLength = 5;
char *pathValue = NULL;

for (index = 0; strncmp(environment[index], "PATH=", 5); index++)
		;
if (environment[index] == NULL)
return (NULL);

for (pathLength = 5; environment[index][varIndex]; varIndex++, pathLength++)
		;
pathValue = malloc(sizeof(char) * (pathLength + 1));

if (pathValue == NULL)
return (NULL);

for (varIndex = 5, pathLength = 0; environment[index][varIndex];
varIndex++, pathLength++)
pathValue[pathLength] = environment[index][varIndex];

pathValue[pathLength] = '\0';

return (pathValue);
}
