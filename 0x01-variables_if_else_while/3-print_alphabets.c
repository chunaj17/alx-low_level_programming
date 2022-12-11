/*
 * File: 3-print_alphabets.c
 * author: samson jisso
 *
 */
#include <stdio.h>
/**
 * main -> prints all alphabet characters
 * in uppercase first then in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char i = 'a', j = 'A';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);
}
