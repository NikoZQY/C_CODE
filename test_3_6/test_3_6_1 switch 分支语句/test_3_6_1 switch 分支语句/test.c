#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int day=5;
	printf("今天星期几:");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("图书馆\n");
		break;
	default:
	printf("输入错误\n");
	break;
	}
			return 0;
}