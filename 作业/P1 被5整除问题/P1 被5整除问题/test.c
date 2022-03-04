#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int m = 0;
	scanf("%d", &m);
	if (m % 5 == 0)
		printf("%s", "YES");
	else
		printf("%s", "NO");
	return 0;
}
