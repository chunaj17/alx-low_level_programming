/*
 * File: 1-print_rev_recursion.c
 * By: samson jisso
 *
 */

#include "main.h"

/**
 * _print_rev_recursion - a function that prints a string in reverse
 * @s: user string to be reversed
 *
 * Return: noting
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
