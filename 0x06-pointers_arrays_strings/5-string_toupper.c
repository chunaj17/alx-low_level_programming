/*
 * File: 5-string_toupper.c
 * auth: samson jisso
 *
 */

/**
 * string_toupper - changes all lowercase letters of a sting to uppercase
 * @l: character pointer
 *
 * Return: character
 */
char *string_toupper(char *l)
{
	while (*l)
	{
		*l = (*l > 'a' && *l <= 'z') ? *l - 32 : *l;
	       l++;
	}
	return (l);
}
