/*
* File: 4-print_alphabt.c
* Author: Samson Jisso
*
*/
#include <stdio.h>

/**
* main -> prints all alphabets in lowercase
* except letters 'q' and 'e'
*
* Return: Always 0
*/

int main(void)
{
	for (char i = 'a'; i <= 'z'; i++)
	{
	if (i != 'q' && i != 'e')
	{
		putchar(i);
	}
	}
	putchar('\n');
return (0);
}
