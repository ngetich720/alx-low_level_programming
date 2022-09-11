#include <stdio.h>

/**
 * main - Final advanced number arrangement aka comb5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; ++a)
	{
		for (b = 0; b < 10; ++b)
		{
			for (c = 0; c < 10; ++c)
			{
				for (d = 0; d < 10; ++d)
				{
					if (((a == c) && (b >= d)) || (a > c))
					{
						continue;
					}

					putchar(44);
					putchar(32);
				}
			}
		}
	}

	putchar(10);
	return (0);
}

