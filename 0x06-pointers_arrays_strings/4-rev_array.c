/*
 * File: 4-rev_array.c
 * auth: samson jisso
 *
 */
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: integer pointer
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i++;
	}
	printf("\n");
}
