#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int day=5;
	printf("�������ڼ�:");
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("ͼ���\n");
		break;
	default:
	printf("�������\n");
	break;
	}
			return 0;
}