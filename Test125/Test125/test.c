#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//void menu()
//{
//	printf("*******************************\n");
//	printf("***** 1. play   0. exit   *****\n");
//	printf("*******************************\n");
//}
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
//
//	while (1)
//	{
//
//		printf("������:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		if (guess == ret)
//		{
//			printf("�¶���\n");
//			break;
//		}
//
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			 game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//
//		}
//	} while (input);
//	return 0;
//}
#include<string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
	while (1)
	{

		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)
		{
			system("shutdown -a");
			break;
		}
		
	}
	return 0;
}