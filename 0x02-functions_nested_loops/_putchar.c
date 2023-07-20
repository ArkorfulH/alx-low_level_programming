#include "main.h"
#include <unistd.h>
/**
 *_putchar - writes the character c to stdout
 *@c: the character to print
 *
 *Return: On succes 1.
 *on error, -1 is returned, and errno is ser=t appropraitely.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
