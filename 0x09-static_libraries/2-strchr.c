#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: the string
 * @c: the required charcter
 *
 * Return: a pointer to the first occurence
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
