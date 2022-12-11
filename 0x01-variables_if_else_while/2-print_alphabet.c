#include <stdio.h>
/*
 * File: 2-print_alphabet.c
 * Author: Samson Jisso
 */

/**
 * main -> prints all alphbet letters in lower_case
 *
 * Return: Always 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
