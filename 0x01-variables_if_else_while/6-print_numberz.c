#include <stdio.h>
/**
 *main - Entry poin
  *Description: prints numbers 0 - 9 ASCII
  *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for  (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}