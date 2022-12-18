/*
 * File: 6-print_line.c
 * auth: samson jisso
 *
 */
#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: integer value to be printed
 *
 * Return: noting
 */

void print_line(int n)
{
	int i;

	if (n != 0 && n >= 0)
	{
	for (i = 0; i <= n - 1; i++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}
