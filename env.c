#include "shell.h"

/**
 * print_environment - Prints the environment to standard output.
 *
 * @environment: Environment variables.
 */
void print_environment(char **environment)
{
size_t index = 0;

while (environment[index])
{
write(STDOUT_FILENO, environment[index], _strlen(environment[index]));
write(STDOUT_FILENO, "\n", 1);
index++;
}
