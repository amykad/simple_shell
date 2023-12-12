#include "shell.h"

/**
 *  _strcat- Concatenates two strings.
 *
 * @destination: Destination string.
 * @source: Source string.
 * Return: Pointer to the concatenated string.
 */
char *_strcat(char *destination, char *source)
{
int i, j = 0;

for (i = 0; destination[i] != '\0'; i++)
{
}

for (j = 0; source[j] != '\0'; j++)
{
destination[i] = source[j];
i++;
}

destination[i] = '\0';
return (destination);
}

/**
 * custom_string_compare - Compares two strings.
 *
 * @str1: First string.
 * @str2: Second string.
 * Return: Difference between the ASCII values
 * of the first differing characters.
 */
int custom_string_compare(char *str1, char *str2)
{
int i = 0;
int difference;

while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
i++;

difference = str1[i] - str2[i];
return (difference);
}


/**
 * _strlen - Gets the size of a string.
 *
 * @str: The string to measure.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
;

return (i);
}

/**
 * custom_string_n_compare - Compares two strings up
 * to a specified number of characters.
 *
 * @str1: First string.
 * @str2: Second string.
 * @n: Number of characters to compare.
 * Return: Difference between the ASCII values of
 * the first differing characters.
 */
size_t custom_string_n_compare(char *str1, char *str2, size_t n)
{
size_t i, j;

for (j = 0; str1[j] != '\0' && j < n; j++)
{
i = str1[j] - str2[j];

if (i != 0)
{
return (i);
}
}
return (0);
}
/**
 * _strcpy - Copies the string pointed to by src into dest.
 *
 * @destination: Destination of the copy.
 * @source: Source of the copy.
 * Return: Char pointer to dest.
 */
char *_strcpy(char *destination, char *source)
{
int i = 0;

for (i = 0; source[i] != '\0'; i++)
{
destination[i] = source[i];
}
destination[i] = '\0';
return (destination);
}
