#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//struct Book
//{
//	char name[20];//c程序设计
//	short price;//55
//};
//int main()
//{
//	struct Book b1 = { "c语言程序设计",55 };
//	struct Book* pb = &b1;
//	printf("name is %s\n", (*pb).name);
//	printf("name is %s\n", pb->name);
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d元\n", b1.price);
//	b1.price = 15;
//	printf("修改后的价格：%d元\n", b1.price);
//	return 0;
//}
//int main()
//{
//	int age ;
//	scanf("age=%d", &age);
//	if (age < 18)
//		printf("未成年");
//	else if (age>50)
//		printf("老年人");
//	else
////		printf("青年人");
////	return 0;
////
////}
//int main()
//{
//	int n;
//	long  a = 1,b=0;
//	int  i;
//	int j;
//	scanf("%d", &n);
//	for (j = 1; j < n + 1; j++)
//	{
//
//		for (i = 1; i < j + 1; i++)
//		{
//			a = a*i;
//			printf("jiecheng:%d\n", a);
//		}
//		b = b + a;
//	}
//	printf("n的阶乘he为%d\n", b);
//	return 0;
////}
//int main()
//{
//	int k=1;
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int mid;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标：%d", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
