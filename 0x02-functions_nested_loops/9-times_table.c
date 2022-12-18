/*
 * File: 9-times_table.c
 * auth: samson jisso
 */
#include "main.h"
/**
 * print - prints integers more than 9
 * @n: integer more than 9
 */

void print(int n)
{
	if (n / 10)
	{
	print(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * print_space_and_comma - prints space and commas
 * @m: multiplication result
 * @j: integer value
 *
 */

void print_space_and_comma(int m, int j)
{
	if (j != 9)
	{
		_putchar(',');
	if (m > 9)
	{
		_putchar(' ');

	}
	else 
	{
		_putchar(' ');
		_putchar(' ');
	}
	}
}	

/**
 * times_table - prints multiples of 9 table
 *
 */

void times_table(void)
{
	int i = 0;
	int j = 0, mul;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul = i * j;
			if (mul <= 9)
			{
				_putchar(mul + '0');
				print_space_and_comma(mul, j);
			}
			else
			{
				print(mul);
				print_space_and_comma(mul, j);
			}
		}
		 _putchar('\n');
	}
}
