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
		
	if (n != 0 && n >= 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
			_putchar('\n');
			for (j = 0; j < i + 1; j++)
			{
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}
