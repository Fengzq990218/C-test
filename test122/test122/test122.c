#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	/*int right = sizeof(arr1) / sizeof(arr1[0]) - 2;*/
//	int right = strlen(arr1) - 1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	
//	return 0;

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("三次密码均错误，退出函数");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("输入三个数\n");
//	scanf("%d%d%d",&a,&b,&c );
//	//a max,c min
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp =b;
//		b = c;
//		c = tmp;
//	}
//
//
//	printf("%d %d %d\n", a, b, c);
//	return 0int
//int main()
//{
//	int m = 24;
//	int n = 18;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m%n)
//	{
//		r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		/*if (year % 4 == 0 && year % 100 !=  0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else 
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}*/
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//			printf("%d ", year);
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//判断i是否为素数
//		
//		for (j = 2;j<=sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i) )
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\n%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int sign = 1;
//	for (i = 1; i < 101; i++)
//	{
//		sum += sign * 1.0 / i;
//		sign = -sign;
//
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	int j = 1;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j < i + 1; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

