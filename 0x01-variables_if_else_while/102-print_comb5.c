/*
 * File: 102-print_comb5.c
 * Author: Samson Jisso
 *
 */
#include <stdio.h>
/**
 * main -> prints all possible combination of two two-digit numbers
 *
 * Return: Always 0
 *
 */

int main(void)
{
	int i = 0, j = 0;

	while (i <= 9)
	{
		while (j <= 8)
		{
			int k = i;
			while (k <= 9)
			{
				int l = j + 1;
				while (l <= 9)
				{
					putchar(i % 10 + '0');
					putchar(j % 10 + '0');
					putchar(' ');
					putchar(k % 10 + '0');
					putchar(l % 10 + '0');
					if (i != 9 || j != 8 || k != 9 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}	
					l++;
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
