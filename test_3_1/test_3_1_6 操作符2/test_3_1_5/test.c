#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 10;
	int max = 0;
	max = a > b ? a : b;
	int c = ++b;
	int d = 10;
	int e = d++;
	int f =(int) 3.14;
	int g = 3;
	int h = 0;
	int i = g && h;
	int j = 0;
	int k = 1;
	int o = j || k;
	int p = (g =h + 2, h= j - 2, j=h+g );
	printf("%d\n", ~a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);
	printf("%d\n", e);
	printf("%d\n", f);
	printf("%d\n", i);
	printf("%d\n", o);
	printf("%d\n", max);
	printf("%d\n", p);
	return 0;
}