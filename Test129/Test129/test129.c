#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int Fac1(int i)
//{
//	if (i <= 1)
//		return 1;
//	else
//		return i*Fac1(i - 1);
//}
//int main()
//{
//	int n = 5;
//	int ret = 0;
//	ret = Fac1(n);
////	printf("n!=%d\n", ret);
////	return 0;
////}
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("Fib(n)=%d", ret);
//	return 0;
//}
//
//#include <stdio.h>
//#include <string.h>
///*
//�㷨˼·��1�� n-1�������ȷŵ�B��λ��
//2.��A���ϵ�ʣ�µ�һ�����ƶ���C����
//3����n-1���̴�B���ƶ���C����
//*/
////��������
//void move(char x, char y);
//void hannuo(int n, char one, char two, char three)
//{
//	if (n == 1)move(one, three); //�ݹ��ֹ����
//	else
//	{
//		hannuo(n - 1, one, three, two);//�� n-1�������ȷŵ�B��λ��
//		move(one, three);//��A���ϵ�ʣ�µ�һ�����ƶ���C����
//		hannuo(n - 1, two, one, three);//��n-1���̴�B���ƶ���C����
//
//	}
//}
//void move(char x, char y)
//{
//	printf("%c--->%c", x, y);
//}
//
//int main()
//{
//	int n;
//	printf("input your number");
//	scanf("%d", &n);
//	hannuo(n, 'A', 'B', 'C');
//	return 0;
//}
//int count = 0;
//void move(char x, char y)
//{
//	count++;
//	printf("%c--->%c ��%d��\n", x, y,count);
//	
//}
//
//void hannuo(int n, char a, char b, char c)
//{
//	if (n == 1)
//		move(a, c);
//	else
//	{
//		hannuo(n - 1, a, c, b);
//		move(a, c);
//		hannuo(n - 1, b, a, c);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	hannuo(n, 'a', 'b', 'c');
//	printf("count = %d\n", count);
//	return 0;
//}

//������̨
int QW(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return QW(n - 2) + QW(n - 1);
}


int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = QW(n);
	printf("һ��%d��\n", ret);
	return 0;
}