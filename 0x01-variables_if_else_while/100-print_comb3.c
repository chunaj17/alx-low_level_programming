/*
 * File: 100-print_comb3.c
 * Author: Samson Jisso
 *
 */

#include <stdio.h>

/**
 * main -> prints all possible different combinations fo two digits.
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	while (i <= 8)
	{
		int j = i + 1;

		while (j <= 9)
		{
			putchar(i % 10 + '0');
			putchar(j % 10 + '0');
			if ((i != 8) || (j != 9))
			{
				putchar(',');
			}
			putchar(' ');
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
