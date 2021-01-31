#define _CRT_SECURE_NO_WARNINGS 1
////#include<stdio.h>
////int main()
////{
////	//EOF - end of file -文件结束标志
////	int num1 = 10;
////	int num2 = 20;
////	if (num1 > num2)
////		printf("较大值: %d\n", num1);
////	els/		printf("较大值： %d\n", num2);
////	return 0;
////
////	
////}
//#include<stdio.h>
////int Max(int x, int y)
////{
////	if (x > y)
////}
////int main()
////{
////	int num1 = 10;
////	int num2 = 20;
////	int max = 0;
////	max = Max(num1, num2);
////	printf("max=%d\n", max);
////}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//
//}
//int main()
//{
////	int i = 0;
////	while (i < 5)
////	{
////		test();
////		i++;
////		
////	}
////	return 0;
////}
//#include<stdio.h>
//extern int Add(int, int);
//#define ADD(X, Y) X+Y;
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = Add(a, b);
//	printf("c=%d\n", c);
//	c = ADD(a, b);
//	printf("c=%d\n", c);
////	return 0;
////}
////#include<stdio.h>
////int main()/*
////{
//int a = 10;
//int* p = &a;
//*p = 20;
//printf("a=%d\n", a);
//return 0;
//}*/
//}
#include<stdio.h>
int main()
{
	char ch = 'w';
	char* pc = &ch;
	/**pc = 'a';
	printf("%c\n", ch);*/
	printf("%d\n", sizeof(pc));
	return 0;
}