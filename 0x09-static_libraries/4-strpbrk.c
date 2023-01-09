#include "main.h"

/**
 * _strpbrk - a function that searches as string for any
 * of  a set of bytes
 * @s: the string
 * @accept: the string searched
 *
 * Return: a ponter to the byte in s
 * that mathces one of the bytes in accept,
 * or Null if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return ('\0');
}
