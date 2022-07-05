#include <unistd.h>
/**
 * main - prints _putchar to standard output
 * Return - on success 1
 */
char* file = "_putchar";

int _putchar(file)
{
	write(file);
	return (0);
}
