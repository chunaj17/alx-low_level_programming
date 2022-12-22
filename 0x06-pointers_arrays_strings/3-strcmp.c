/*
 * File: 3-strcmp.c
 * auth: samson jisso
 *
 */

/**
 * _strcmp - comparest two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			flag = 1;
		}
		a++;
		b++;
	}
	if (flag == 0)
		return (0);
	else
		return (1);
}
