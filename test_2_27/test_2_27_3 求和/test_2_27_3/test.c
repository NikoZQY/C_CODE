#define _CRT_SECURE_NO_WARNINGS 1
//2个整数的求和
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum = %d\n", sum);
	return 0;
}