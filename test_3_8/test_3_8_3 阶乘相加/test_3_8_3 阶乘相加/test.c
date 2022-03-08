#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	int j = 1;
	int sum = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		{
			j *= i;
			sum += j;
		}
	printf("%d", sum);
	return 0;
}