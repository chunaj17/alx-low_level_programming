/*
 * File: 5-more_numbers.c
 * Auth: samson jisso
 */
#include "main.h"

/**
 * print_more - prints numbers more than 9 using putchar
 * @n: integer value
 */
void print_more(int n)
{
	if (n / 10)
		print_more(n / 10);
	_putchar(n % 10 + '0');
}
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 *
 * Returns: noting
 */
void more_numbers(void)
{
	int i, n;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i <= 9)
			{
				_putchar(i + '0');
			}
			else
			{
				print_more(i);
			}
		}
		_putchar('\n');
	}
}
