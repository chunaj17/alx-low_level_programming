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
	for (char i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (char j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');

	return (0);
}
