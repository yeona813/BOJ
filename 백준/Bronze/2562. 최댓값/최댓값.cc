#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[100];
	for (int i = 1; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int max = 0;
	int count = 0;
	for (int i = 1; i < 10; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			count = i;
		}
	}
	printf("%d\n", max);
	printf("%d", count);
	return 0;
}