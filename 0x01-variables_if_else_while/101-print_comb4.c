/*
 * File: 101-print_comb4.c
 * Author: Samson Jisso
 *
 */

#include <stdio.h>

/**
 * main -> prints all possible different combinations of three digits
 *
 * Returns: Always 0
 *
 */
int main(void)
{

	int i = 0, j, k;

	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				putchar(i % 10 + '0');
				putchar(j % 10 + '0');	
				putchar(k % 10 + '0');
				if ((i != 7) || (j != 8) || (k != 9))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
