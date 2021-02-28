#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//"abcdef" 常量字符串
//	/**p = 'W';*/
//	printf("%s\n", p);
//	return 0;
//}
//segmentfault

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//	if (arr1 == arr2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//指针数组  是数组

//int main()
//{
//	int arr[10] = { 0 };//整形数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整形指针的数组 - 指针数组
//	char* pch[9];//存放字符指针的数组 - 指针数组
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a, &b, &c, &d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//数组指针

//int main()
//{
//	int* p = NULL;//整形指针--指向整形的指针
//	char* pc = NULL;//支付指针--指向字符的指针
//	//数组指针 - 指向数组的指针 - 存放数组的地址
//	int  arr[10] = { 0 };
//	//arr - 首元素地址
//	//&arr[0]
//	//&arr - 数组地址
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	//p - 数组指针
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char*(*pa)[5] = &arr;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	/*int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//
//	int* p = arr;
//	int  i = 0;
//	for (i = 0; i < 10; i++)
//	{
//
//	}
//	return 0;
//}
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int  main()
//{
//	
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr, 3, 5);//arr - 数组名 - 首元素地址
//	print2(arr, 3, 5);
//	
//	return 0;
//}

//int main()
//{
//	//字符指针
//	char ch = 'W';
//	char* p = &ch;
//	const char* p2 = "abcdef";
//
//	//指针数组
//	int* arr[10];
//	char* ch[5];
//
//	//数组指针
//	int* p3;//整形指针
//	char* p4;//字符指针
//	int arr2[5];
//	int(*pa)[5] = &arr2;//数组指针
//
//
//
//	return 0;
//}
//
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
//void test2(int arr[3][])
//{}
//void test3(int arr[][])
//{}

//test3(int* arr)

//void test4(int **arr)
//{}

test5(int(*arr)[5])
{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	//test(arr);//二维数组 传参
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//
//	//test3(arr);
//
//	//test4(arr);
//
//	test5(arr);
//	return 0;
//}
//void  test(int** p)
//{}
//
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];
//	test(arr);//指针数组
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
////函数指针- 存放函数地址的指针
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d\n", Add(a, b));
//
//
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//&函数名 和 函数名 都是函数的地址
//
//	int(*pa)(int, int) = Add;
//
//	printf("%d\n", (*pa)(2, 3));
//	return 0;
//}

//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello  bit");
//	return 0;
//}

(*(void))
