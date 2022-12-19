/*
 * File: 10-pirnt_triangel.c
 * auth: samson jisso
 *
 */

#include "main.h"

/**
 * print_triangle - prints a triange, followed by a new line.
 * 
 */

void print_triangle(int size)
{
	int i;

	for (i = 0; i < size - 1; i++)
	{
		_putchar('i');
		/*for (j = size; j > 0; j--)
		{
			_putchar(35);
			_putchar('\n');
		}
		*/
	}
	_putchar('\n');
}
