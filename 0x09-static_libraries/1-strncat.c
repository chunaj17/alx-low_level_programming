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

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
