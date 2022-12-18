/*
 * File: 9-times_table.c
 * auth: samson jisso
 */
#include "main.h"
/**
 * times_table - prints the 9 times table
 * print - prints integers more than 9 using putchar
 * @n: integer more than 9
 *
 * Return: void
 */

void print(int n);

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
				if (j != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
			else
			{
				print(mul);
				if (j != 9)
				{
				_putchar(',');
				_putchar(' ');
				}
			}
		}
		 _putchar('\n');
	}
}
void print(int n)
{
	if (n / 10)
	{
	print(n / 10);
	}
	_putchar(n % 10 + '0');
}
