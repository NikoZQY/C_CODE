#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
main()
{
	char password[20] = { 0 };
	printf("���������룺");
	scanf("%s", password);
	printf("��ȷ������:(Y/N)");
	int ch = 0;
	while ((ch = getchar()) != '\n')
	{
		;
	}
	int gb = 0;
	gb=getchar();
	if (gb == 'Y')
	{
		printf("ȷ�ϳɹ�\n");
	}
	else
	{
		printf("ȷ��ʧ��\n");
	}
	return 0;
}