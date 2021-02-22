/**
 * _strchr - Locates a char in a str
 * @s: given str
 * @c: char to find
 *
 * Return: char to find.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
		if (s[i] == c)
			return (s + i);

	return ('\0');
}
