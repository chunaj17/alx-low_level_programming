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
	for (int i = 0; i < 10; i++)
	{
		putchar(i % 10 + '0');

	}
	for (char i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
