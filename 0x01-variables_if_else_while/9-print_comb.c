/*
 * File: 9-print_comb.c
 * Author: samson jisso
 *
 */

#include <stdio.h>

/**
 * main -> prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');
		if (i != 9)
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
