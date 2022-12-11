/*
 * File: 8-print_base16.c
 * Author: samson jisso
 *
 */
#include <stdio.h>

/**
 * main -> prints all the numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	char j = 'a';

	while (i < 10)
	{
		putchar(i % 10 + '0');
		i++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
