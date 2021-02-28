#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//枚举类型
//enum Sex
//{
//	//枚举的可能取值-常量
//	MALE,
//	FEMALE=4,
//	SECRET
//};
//
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};
//
//#define RED 0
//#define GREEN 1
//#define BLUE 2
//
//int main()
//{
//	//const int num = 100;
//
//	//enum Sex s = MALE;
//
//
//	enum Color c = RED;//int
//
//	//printf("%d %d %d\n", RED,GREEN,BLUE);
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//
//	return 0;
//}

//c语言的源代码--预编译--->编译----链接----可执行程序



//联合-联合体--共用体


//union Un
//{
//	//不能同时使用
//	char c;//1
//	int i;//4
//};
//
//
//int main()
//{
//	union Un u;
//
//
//	printf("%d\n", sizeof(u));
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//
//
//	return 0;
//}



//判断大端、小端存储

//case 1
//int check_sys()
//{
//	int a = 1;
//	//返回1表示小端
//	//返回0表示大端
//	return *(char*)&a;
//}


//int check_sys()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1 表示小端
//	//返回0 表示大端
//	return u.c;
//}
//
//int main()
//{
//	//int a = 0x11223344;
//	//低地址------------------------------------->高地址
//	//大端字节序存储模式
//	//小端字节序存储模式
//	//
//	//讨论一个数据，放在内存中的存放的字节顺序
//	//大小端字节序问题
//
//
//	int a = 1;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端");
//	}
//	else
//		printf("大端");
//	printf("\n");
//	return 0;
//}


//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));//enum 大小 4字节
//	return 0;
//}


union Un
{
	int a;//4   对齐数 4
	char arr[5];//5   对齐数 1
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	//联合体大小至少是最大成员的大小
	//当最大成员大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍

	return 0;
}