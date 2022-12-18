/*
 * File: 8-print_square.c
 * auth: samson jisso
 */

#include "main.h"

/**
 * print_square - prints square, followed by a new line
 * @size: size of square integer
 */

void print_square(int size)
{
	int i, j;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
