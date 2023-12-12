#include "shell.h"

/**
 * custom_get_input - Reads user input.
 * Return: The user input.
 */
char *custom_get_input(void)
{
char *input_line = NULL;
size_t input_size = 0;

if (isatty(STDIN_FILENO))
write(STDOUT_FILENO, "$ ", 2);

if (getline(&input_line, &input_size, stdin) == -1)
{
free(input_line);
return (NULL);
}
return (input_line);
}
