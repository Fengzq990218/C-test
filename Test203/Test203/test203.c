#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	/*printf("%d\n",sizeof(char*));
//	printf("%d\n",sizeof(short*));
//	printf("%d\n",sizeof(int*));
//	printf("%d\n",sizeof(double*));
//*/
//	//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//	//int*  *p能够访问4个字节
//	//char*           1
//	//double*         8
//	int a = 0x11223344;
//	char* pa = &a;
//	*pa = 0;
//	//char* pc = &a;
//	//printf("%p\n", pa);
//	//printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	int  a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//
//
//	//指针的步长
//	//char*p  p+1-->1
//	//int* p  p+1-->4
//	//double* p     8
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	char* p=arr;//首元素地址
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + 4*i) = 1;
//	}
//	return 0;
//}

//int main()
//{
//	
//	int a;
//	int* p;
//	*p = &a;
//	return 0;
//}

//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	int* pc = NULL;
//	printf("%d\n", *p);
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = &arr[9];
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}*/
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *p);
//		p -= 2;
//	}
//
//
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%d\n",&arr[9] - &arr[0]);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* star = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - star;
//}
//
//
//int main()
//{
//	//strlen
//	//递归
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//
//
//	return 0;
//
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//	//1、&arr-&数组名--整个数组的地址
//	//2、sizeof（arr）-数组名表示整个数组-sizeof（arr）计算整个数组的大小
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	/*int * p = arr;*/
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr + i) = i);
//	}
//	return 0;
//}


int main()
{
	//int a = 0;
	//int* pa = &a;
	//int** ppa = &pa;

	//**ppa = 10;
	//printf("%d\n", a);
	int a = 0;
	int b = 1;
	int c = 2;
	
	int* arr[10] = { &a, &b, &c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d\n", *(arr[i]));
	}





	return 0;
}

