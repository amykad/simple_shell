#include "shell.h"

/**
 * tokenize - Tokenizes a string.
 * @input_line: User input.
 * Return: Pointer to an array of pointers.
 */
char **tokenize(char *input_line)
{
char **command_tokens = NULL;
char *token = NULL;
size_t index = 0;
int token_count = 0;

if (input_line == NULL)
return (NULL);

for (index = 0; input_line[index]; index++)
{
if (input_line[index] == ' ')
token_count++;
}
if ((token_count + 1) == _strlen(input_line))
return (NULL);

command_tokens = malloc(sizeof(char *) * (token_count + 2));
if (command_tokens == NULL)
return (NULL);

token = strtok(input_line, " \n\t\r");

for (index = 0; token != NULL; index++)

{
command_tokens[index] = token;
token = strtok(NULL, " \n\t\r");
}
command_tokens[index] = NULL;
return (command_tokens);
}
