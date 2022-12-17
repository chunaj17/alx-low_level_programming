/*
 * File: 5-more_numbers.c
 * Auth: samson jisso
 */
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed by a new line.
 *
 * Returns: noting
 */
void more_numbers(void)
{
	int i,j,n;

	for (n = 0; n <= 10; n++)
	{
		for (i = 48; i <= 57; i++)
		{
			_putchar(i);
		}
		for (j = 48; j <= 52; j++)
		{
			_putchar(49);
			_putchar(j);
		}
		_putchar('\n');
	}
}
