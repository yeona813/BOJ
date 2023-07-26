#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int a, b, c;
	int wow = 0;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c)
	{
		wow = 10000 + (a * 1000);
	}
	else if (a == b && b != c)
	{
		wow = 1000 + (a * 100);
	}
	else if (b == c && b != a)
	{
		wow = 1000 + (b * 100);
	}
	else if (a == c && c!= b)
	{
		wow = 1000 + (a * 100);
	}
	else if (a != b && a != c && b != c)
	{
		if (a > b)
		{
			if (c > a)
			{
				wow = c * 100;
			}
			else
			{
				wow = a * 100;
			}
		}
		else
			if (b > c)
			{
				wow = b * 100;
			}
			else
			{
				wow = c * 100;
			}
	}
	printf("%d", wow);
}