#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 9 / 2;
	float b = 9 / 2;
	float c = 9 / 2.0;
	int d = 9 % 2;
	int e = 2;
	int f = e << 1;
	int g = 10;
	g += 10;
	int h = 10;
	int i = 0;
	int j = 1;
	int arr[10] = { 0 };
	printf("%d\n", a);
	printf("%f\n", b);
	printf("%f\n", c);
	printf("%d\n", d);
	printf("%d\n", f);
	printf("%d\n", g);
	printf("%d\n", !h);
	printf("%d\n", !i);
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(j));
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr[0]));
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	return 0;
}