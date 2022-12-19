/*
 * File: 5-rev_string.c
 * Auth: samson jisso
 */

/**
 * rev_string - reverses a string
 * @*s: string to be reversed
 *
 */
void rev_string(char *s)
{
	long int i;
	for(i = *s - 1; i > *s[0]; i++)
	{
		s = *s[i];
	}
}
