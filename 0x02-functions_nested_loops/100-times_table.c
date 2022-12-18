/*
 * File: 100-times_table.c
 * auth: samson jisso
 */

#include "main.h"
/**
 * print_putchar_more - prints numbers more than 9
 * @m: integer to be printed
 */

void print_putchar_more(int m)
{
	if (m / 10)
		print_putchar_more(m / 10);
	_putchar(m % 10 + '0');
}

/**
 * print_space_and_comma - prints space and comma
 * @m: integer
 * @j: int
 */

void print_space_and_comma(int m, int j)
{
	if (j != 0)
	{
		_putchar(',');
		if (m >= 100)
		{
			_putchar(' ');
		}
		else if (m >= 10 && m < 100)
		{
			_putchar(' ');
			_putchar(' ');
		}
		else if (m < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
	}
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: int
 *
 */

void print_times_table(int n)
{
	int i, j, mul;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;
				if (mul <= 9)
				{
					print_space_and_comma(mul, j);
					_putchar(mul + '0');
				}
				else
				{
					print_space_and_comma(mul, j);
					print_putchar_more(mul);
				}
			}
			_putchar('\n');
		}
	}
	else if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}
}
