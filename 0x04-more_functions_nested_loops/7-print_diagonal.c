/*
 * File: 7-print_diagonal.c
 * auth: samson jisso
 */

#include "main.h"

/**
 * print_diagonal - a diagonal line on the terminal.
 * @n: number of diagonal lines
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (i != 0 && i >= 0)
	{
	for (i = 0; i = n - 1; i++)
	{
		_putchar(47);
		for (j = 0; j = i; j++)
		{
			_putchar(' ');
		}
	}
	}
	putchar('\n');
}
