#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int h, m;
	scanf("%d %d", &h, &m);
	if (0 <= h <= 23 && 0 <= m <= 59)
	{
		if (m >= 45)
		{
			m -= 45;
			printf("%d %d\n", h, m);
		}
		else
		{
			m += 15;
			h -= 1;
			if (h < 0)
			{
				h = 23;
			}
			printf("%d %d\n", h, m);
		}
	}
}