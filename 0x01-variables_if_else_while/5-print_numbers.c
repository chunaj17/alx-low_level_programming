/*
 * File: 5-print_numbers.c
 * Author: samson jisso
 *
 */
#include <stdio.h>

/**
 * main -> prints all single digit numbers of base 10
 * starting from 0
 *
 * Return: Always 0
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
