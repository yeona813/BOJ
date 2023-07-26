#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int a, b, c;
	int h, m;
	scanf("%d %d", &a, &b);
	scanf("%d", &c);
	h = (b + c) / 60;
	m = (b + c) % 60;
	if (0 <= a <= 23 && 0 <= b <= 59)
	{
		a += h;
		if (a >= 24)
		{
			a -= 24;
		}
	}
	printf("%d %d", a, m);
}