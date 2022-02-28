#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 100
enum Sex
{
	MALE,
	FEMALE,
	SECRET
};
int main()
{
	const int n = 10;
	printf("n=%d\n", n);
	int m = MAX;
	printf("m=%d\n", m);
	printf("a=%d\n", MALE);
	printf("b=%d\n", FEMALE);
	printf("c=%d\n", SECRET);
	return 0;
}