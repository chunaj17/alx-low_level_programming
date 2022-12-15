/*
 * File: 1-alphabet.c
 * Author: Samson jisso
 *
 */

#include "main.h"

/**
 *
 * main -> prints the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0
 *
 */

int print_alphabet()
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
