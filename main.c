#include "shell.h"

/**
 * print_prompt - Prints the shell prompt if
 * the standard input is a terminal.
 */
void print_prompt(void)
{
if (isatty(STDIN_FILENO))
{
printf("$ ");
fflush(stdout);
}
}

/**
 * cleanup - Frees allocated memory for command execution.
 * @line: The input line.
 * @alternative_command: The tokenized alternative command.
 * @original_path: The original PATH environment variable.
 */
void cleanup(char *line, char **alternative_command, char *original_path)
{
free(line);
free(original_path);
for (int i = 0; alternative_command[i] != NULL; i++)
{
free(alternative_command[i]);
}
free(alternative_command);
}

/**
 * main - The main function for the shell program.
 *
 * Return: Returns 0 on successful execution.
 */
int main(void)
{
char *line = NULL, **alternative_command = NULL;
char *path = getenv("PATH");
int alternative_status = 0;
char *original_path = strdup(path);

while (1)
{
pid_t child_pid;

print_prompt();
ine = custom_read_line();

if (line == NULL)
{
if (isatty(STDIN_FILENO))
{
printf("\n");
}
cleanup(line, alternative_command, original_path);
return (alternative_status);
}

alternative_command = tokenize(line);
if (!alternative_command)
{
cleanup(line, alternative_command, original_path);
continue;
}

cleanup(line, alternative_command, original_path);
}
return (0);
}
