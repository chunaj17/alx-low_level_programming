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
	int i = -1;

	while (*s)
	{
		s++;
		i++;
	}

	while (i >= 0)
	{
		s = i;
		--i;
	}

}
