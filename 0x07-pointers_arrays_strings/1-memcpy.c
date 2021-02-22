/**
 * _memcpy - Replicate memset function
 * @dest: destinr str
 * @src: str to copy
 * @n: size of memory
 *
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
