/*
 * File: 9-times_table.c
 * auth: samson jisso
 */
#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0;
	int j = 0;
	
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
		 _putchar(j + '0');	
		}
		 _putchar('\n');
	}
}
