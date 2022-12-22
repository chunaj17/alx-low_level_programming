/*
 * File: 1-strncat.c
 * auth: samson jisso
 */

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: source String
 * @n: integer value
 *
 * Return: character
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest != '\0')
	{
		i++;
		while (src != dest)
		{
			j++;
		}
	}
	return ("samson");
}
