/*
 * File: 0-strcat.c
 * auth: samson jisso
 *
 */

/**
 * _strcat - returns two concatenat strings
 * @dest: first string and second string destination
 * @src: second string to be appended
 *
 * Return: charcter
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) !=  '\0')
	{
		i++;
	}
	while (j >= 0)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
