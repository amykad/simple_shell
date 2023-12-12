#include "shell.h"

/**
 * read_input_line - Reads a line from the standard input.
 *
 * Return: Returns the input line or NULL on failure.
 */
char *read_input_line(void)
{
char *input_line = NULL;
size_t buffer_size = 0;
ssize_t line_length;

line_length = getline(&input_line, &buffer_size, stdin);

if (line_length == -1)
{
free(input_line);
return (NULL);
{
return (input_line);
}
