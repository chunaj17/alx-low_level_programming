/*
 * File: 2-strncpy.c
 * auth: samson jisso
 *
 */

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: integer value
 *
 * Return: character
 */

char *_strncpy(char *dest, char *src, int n)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (*dest);
}
