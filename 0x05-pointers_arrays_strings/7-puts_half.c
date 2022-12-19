/*
 * File: 7-puts_half.c
 * Auth: samson jisso
 *
 */
#include "main.h"
/**
 * puts_half - prints half of a string, followed by a new line.
 * @*str; string to be half printed
 *
 */

void puts_half(char *str)
{
	int i;

	for (i = *str / 2;  i < '\0'; i++)
	{
		_putchar(*str[i]);
	}
	_putchar('\n');
}
