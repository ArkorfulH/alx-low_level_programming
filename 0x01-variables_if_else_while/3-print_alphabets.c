#include <stdio.h>
/**
 *main - Entry poin
  *Description: print alphabets lowercase and uppercase
  *Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
		{
		putchar(n);
		n++;
		}
	putchar('\n');
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');

	return (0);
}