/*
 * File: 0-puts_recursion.c
 * Auth: samson jisso
 *
 */

#include "main.h"

/**
 * _puts_recursion - a function that prints a string
 * @s: user string value
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
