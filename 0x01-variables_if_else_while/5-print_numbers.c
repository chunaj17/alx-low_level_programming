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
	for (int i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
