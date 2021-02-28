#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<Windows.h>


//局部变量  -  栈区
//全局变量  -  静态区

//栈区   局部变量 、 函数的形式参数
//堆区   动态内存分配 malloc\free\calloc\realloc
//静态区 全局变量 、 静态变量 static int a=10;

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S arr[50];//50个struct S 类型的数据
//	//30个  浪费
//	//60个  不够
//
//	return 0;
//}


//malloc

//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		//对返回值进行检测
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用时
//	//就应该还给操作系统
//	free(p);
//	p = NULL;//
//
//	return 0;
//}


//calloc

//int main()
//{
//	//malloc(10*sizeof(int));
//	int* p = (int*) calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc  调整动态内存开辟空间的大小

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用malloc开辟的20个字节的空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望我们能有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	
//
//
//
//	//realloc 使用注意事项
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
//	//最后返回新开辟的内存空间地址
//	//3.得用一个新的变量来接受realloc函数的返回值
//
//
//	int* ptr = realloc(p, 400);
//	if (ptr == NULL)
//	{
//
//	}
//	else
//	{
//		p = ptr;
//
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}






//int main()
//{
	//1.对NULL进行解引用操作

	//int* p = (int*)malloc(40);
	////万一malloc失败了，p就被赋值为NULL
	//*p = 0;//err

	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;


	//2.对动态开辟的内存的越界访问

	//int* p = (int*)malloc(5 * sizeof(int));
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		*(p + i) = i;
	//	}
	//}
	//free(p);
	//p = NULL;



	//3.对非动态开辟内存的free

	//int a = 10;//栈区
	//int* p = &a;
	//*p = 20;

	//free(p);
	//p = NULL;


	//4.使用free释放动态开辟内存的一部分
	//free只能从动态开辟的内存空间的起始位置释放

	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	//for (i = 0; i < 5; i++)
	//{
	//	*p++ = i;
	//}
	////回收空间
	//free(p);
	//p = NULL;




	//5.对同一块动态内存的多次释放

	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////使用
	////释放
	//free(p);
	//p = NULL;
	////...
	//free(p);


	//6.动态开辟内存忘记释放（内存泄漏）

	/*while (1)
	{
		malloc(1);
		
	}*/




//	return 0;
//}


//int main()
//{
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	printf("%s\n", strerror(errno));
//	//}
//	//else
//	//{
//	//	int* p2 = realloc(p, 80);
//	//	if (p2 != NULL)
//	//	{
//	//		p = p2;
//	//	}
//	//}
//
//	int* p = realloc(NULL, 40);//== int* p=malloc(40);
//
//	return 0;
//}





//常见笔试题

//错例
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//str以值传递的形式给p，p时GetMemory函数的形参，只能函数内部有效
//	                       //等GetMemory函数返回之后，动态开辟内存尚未释放，并且无法找到，所以会造成内存泄漏
//
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//str ==NULL  程序崩溃
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//第一种改法
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//第二种改法
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//void Test(int* str)
//{
//	int b = 0;
//	int* p2 = &b;
//	str = p2;
//}
//
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	Test(p);
//	printf("%d\n", *p);
//	return 0;
//}




//第二题
//返回栈空间的地址的问题  栈区  局部变量  出函数会销毁


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}



//int* test()
//{
//	int a = 10;//栈区
//	//static int b = 10;//可以  b 在静态区
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//int* test()
//{
//	int* ptr = malloc(100);//堆区  可以
//	return ptr;
//}
//
//
//int main()
//{
//	int *p = test();
//	return 0;
//}



//第三题


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);//忘记释放动态开辟的内存，导致内存泄漏
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//第四道


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	if (str != NULL)
//	{
//		strcpy(str, "world");//非法访问内存
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//柔性数组


//struct S
//{
//	int n;
//	int arr[10];
//};

//struct S
//{
//	int n;
//	int arr[0];//未知大小 -- 柔型数组成员 - 数组的大小是可以调整的
//	//就 == int arr[];
//};
//
//int main()
//{
//	//struct S s;//
//	//printf("%d\n", sizeof(s));//4
//	struct S* ps = (struct S*) malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放
//	free(ps);
//	return 0;
//}




//struct S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//调整大小
//	int* ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放内存
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}



//struct S
//{
//	int n;
//	char c;
//	int arr[0];//柔型数组成员
//};


//struct S
//{
//	int n;
//	char c;
//	int arr[];//柔型数组成员
//};
//
//int main()
//{
//	//printf("%d\n", sizeof(struct S));
//	int i = 0;
//	struct S* p = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	p->n = 100;
//	p->c = 'w';
//	for (i = 0; i < 10; i++)
//	{
//		p->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p->arr[i]);
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};



int main()
{
	int i = 0;
	struct S* p = (struct S*)malloc(sizeof(struct S));
	p->n = 100;
	p->arr = (int*)malloc(10 * sizeof(int));
	
	for (i = 0; i < 10; i++)
	{
		p->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", p->arr[i]);
	}
	free(p->arr);
	p->arr = NULL;
	free(p);
	p = NULL;
	return 0;
}