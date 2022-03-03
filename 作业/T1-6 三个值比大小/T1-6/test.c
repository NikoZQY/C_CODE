#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a,&b,&c);
	int max = 0;
	if (a < b)
	{
		max = b;
	}
	else
	{
		max = a;
	}
	if (c > max)
	{
		max = c;
	}
	else
	{
		max = b;
	}
	printf("max=%d\n", max);
	return 0;
}