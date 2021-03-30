#include "holberton.h"

/**
 * main - copy text file in another file
 *
 * @argc: lenght of arguments
 * @arg: parameters
 *
 * Return: 0
 */

int main(int argc, char **arg)
{
	int f1, f2, rf1, wf2;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	f1 = open(arg[1], O_RDONLY);

	if (f1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg[1]), exit(98);

	f2 = open(arg[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (f2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg[2]), exit(99);

	do {
		rf1 = read(f1, buf, 1024);
		wf2 = write(f2, buf, rf1);
	} while (rf1 == 1024);

	if (rf1 == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg[1]), exit(98);

	if (wf2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg[2]), exit(99);

	if (close(f1) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1), exit(100);

	if (close(f2) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2), exit(100);

	return (0);
}
