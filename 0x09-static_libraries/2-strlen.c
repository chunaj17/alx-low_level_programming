/*
 * File: 2-strlen.c
 * Auth: samson jisso
 *
 */

#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * @s: string value
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int size = 0;

	while (*s != '\0')
	{
		size++;
		s++;
	}
	return (size);
}
