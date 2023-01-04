/*
 * File: 2-strlen_recursion.c
 * By: samson jisso
 */

#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: the user string
 *
 * Return: integer size of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
