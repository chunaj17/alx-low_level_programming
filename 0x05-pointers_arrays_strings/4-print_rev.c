/*
 * File: 4-print_rev.c
 * Auth: samson jisso
 */

#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse
 * followed by a new line.
 * @s: pointer character
 */

void print_rev(char *s)
{
	int i = -1;

	while (*s)
	{
		s++;
		i++;
	}
	while (i  >= 0)
	{
		s--;
		_putchar(*s);
		--i;
	}
	_putchar('\n');
}
