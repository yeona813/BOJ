#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a[1000000];
int b[1000000];

int main(void)
{
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}
	for (int i = 0; i < num; i++)
	{
		printf("%d\n", a[i] + b[i]);
	}
}