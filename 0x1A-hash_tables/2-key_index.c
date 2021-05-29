#include "hash_tables.h"

/**
 * key_index - Operate the key value
 *
 * @key: Key value
 * @size: length of matrix
 *
 * Return: Key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
