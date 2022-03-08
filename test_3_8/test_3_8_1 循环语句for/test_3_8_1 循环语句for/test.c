#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//    int i = 0;
//    for (i = 1; i <= 10; i++)
//    {
//        if (i == 6)
//            continue;
//        printf("%d", i);
//    }
//
//    return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 3; i++)
//	{
//		for (; j < 3; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}
int main()
{
    int x, y;
    for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
    {
        printf("hehe\n");
    }
    return 0;
}