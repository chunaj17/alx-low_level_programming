/*
 * File: 4-print_rev.c
 * Auth: samson jisso
 */

#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * followed by a new line.
 *
 */

void print_rev(char *s)
{
	int i;

	for (i = *s - 1; i >= *s[0]: i--)
	{
		_putchar(*s[i]);
	}	
	_putchar('\n');
}
