#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int num = 1;
//	while (num < 101)
//	{
//
//		//if (1 == num%2)
//		//{
//		//	printf("num=%d\n",num);
//		//}
//		//num++;
//		if (1 == num % 2)
//			printf("num=%d\n", num);
//		num++;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	//if (1 == day)
//	//	printf("星期一\n");
//	switch (day)
//	{
//	case 1:
//		printf("Monday\n");
//		break;
//	case 2:
//		printf("Tuesday\n");	
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 7:
//		printf("Sunday\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//
//
//	}

//
//
//
//	return 0;
////}
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//
//}
//int main()
//{
//
//	/*while ((ch = getchar()) != EOF)
//		putchar(ch);*/
//	int ret = 0;
//	char password[20] = { 0 };
//	int ch;
//	printf("请输入密码:>");
//	scanf("%s", password);//输入密码，并存放在password数组中
//	printf("请确认（Y/N）:>");
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	ret = getchar();
//	if (ret == 'Y')
//		printf("确认成功\n");
//	else
//		printf("放弃确认\n");
//
//	return 0;
//
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//
//		putchar(ch);
//
//	}
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		continue;
//		printf("%d ", i);
//	}
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 1;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++,k++)
//		{
//			printf("%d", k);
//		}
//	}
//	return 0;
//
//}
int main()
{
	int i = 0;
	do
	{
		printf("%d", i);
		i++;
	} while (i < 10);
	return 0;
}
