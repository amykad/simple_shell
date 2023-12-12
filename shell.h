#ifndef SHELL_H
#define SHELL_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

void print_environment(char **environment);
int execute_command_alternative(char **cmd_args, char **cmd_name);
char *get_path_variable(char **environment);
char *custom_get_input(void);
char *read_input_line(void);
int values_path(char **command, char **environment);
char *_strcat(char *destination, char *source);
int custom_string_compare(char *str1, char *str2);
int _strlen(char *str);
size_t custom_string_n_compare(char *str1, char *str2, size_t n);
char *_strcpy(char *destination, char *source);
char **tokenize(char *input_line);

#endif /* _SHELL_H_ */
