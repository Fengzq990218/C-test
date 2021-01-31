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
//		printf("猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		if (guess == ret)
//		{
//			printf("猜对了\n");
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
//		printf("请选择>:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			 game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
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

		printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)
		{
			system("shutdown -a");
			break;
		}
		
	}
	return 0;
}