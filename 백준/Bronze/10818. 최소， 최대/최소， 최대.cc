#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a[1000000];
int main(void)
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}
	int min = a[0], max = a[0];
	for (int i = 0; i < num ; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
		if (max < a[i])
		{
			max = a[i];
		}
	}
	printf("%d %d", min, max);
}