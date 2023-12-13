#include "shell.h"
#include <stdio.h>
/**
 * custom_read_line - function for write a prompt
 *
 * Return: return custom_line or NULL
*/
char *custom_read_line(void)
{
char *custom_line = NULL;
size_t custom_buffer_size = 0;
ssize_t custom_length;

custom_length = getline(&custom_line, &custom_buffer_size, stdin);

if (custom_length == -1)
{
free(custom_line);
return (NULL);
}
return (custom_line);
}
