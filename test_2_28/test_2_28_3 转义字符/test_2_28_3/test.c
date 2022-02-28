#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	printf("c:\test\test.c\n");
	printf("c:\\test\\test.c\n");
	printf("Are you ok\?\?\n");
	printf("%c\n", '\'');
	printf("%s\n", "\"");
	printf("%c\n", 'a');
	printf("%s\n", "a");
	printf("%s\n", "'");
	printf("\a\a\a");
	printf("\f\n");
	printf("%c\n",'\130');
	printf("%c\n",'\101');
	printf("%c\n", '\x30');
	return 0;
}