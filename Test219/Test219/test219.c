#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>
#include<stddef.h>
//strlen

//1.计数器的方法
//2.递归
//3.指针-指针
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str!='\0')//while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//int my_strlen(const char* str)
//{
//	char *p = str;
//	while (*p != '\0')
//	{
//		p++;
//	}
//	return p - str;
//}

//int my_strlen(const char* str)
//{
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else return 1 + my_strlen(str + 1);
//}
//int main()
//{
//	int len = my_strlen("abcdef");
//	//错误示范
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	//int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	//strlen 返回值  size_t==unsigned int 
//	return 0;
//}


//strcpy

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	char* ret = dest;//拷贝src指向的字符串到dest指向的空间，包含'\0'
//
//	//while (*src != '\0')
//	//{
//	//	*dest = *src;
//	//	dest++;
//	//	src++;
//	//}
//	//*dest = *src;
//
//	//简化
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//  错误示范 char arr2[]={'b','i','t'};
//  错误示范 char* p="abcdef";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcat  字符串追加

//my_strcat(char* dest, const char* src)
//{
//	assert(dest&&src);
//	//assert(dest!=NULL);
//	//assert(src);
//	char* ret = *dest;
//	//1.找到目的字符串的\0
//
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//
//	//2.追加
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{ 
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//strcmp  比较

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//大于
//	else if (*str1 < *str2)
//		return -1;//小于
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "qwert";
//	int ret = my_strcmp(p1, p2);
//
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char arr1[7] = "abcefg";
//	char arr2[] = "ttttttt";
//	//strncpy  模拟实现
//	strncpy(arr1, arr2, 7);
//	printf("%s\n", arr1);
//	return 0;
//}

//strncat  追加

//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);
//	return 0;
//
//}



//strncmp 比较

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	
//	//int ret = strcmp(p1, p2);
//
//	int ret = strncmp(p1, p2, 3);
//
//
//	printf("%d\n", ret);
//	return 0;
//}


//strstr  查找字符串

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1&&p2);
//
//	// assert(p2 != NULL);
//
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 != '\0')&&(*s2 != '\0')&&(*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到
//		}
//      if (*s1 == '\0')
//         return NULL;
//		cur++;
//	}
//	return NULL;//找不到
//
//	//if (*p2 == '\0')
//	//{
//	//	return p1;
//	//}
//	//while (*p1)
//	//{
//	//	while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
//	//	{
//	//		p1++;
//	//		p2++;
//	//	}
//	//	if (*p2 == '\0')
//	//	{
//
//	//	}
//	//	p1++;
//	//}
//}
//
//int main()
//{
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//KMP 算法？？

  //strtok   切割

//int main()
//{
//	//192.168.31.121  分隔符 .
//	//
//	//fzq@qq.com  @ .
//
//	//char arr[] = "fzq@qq.com";
//	//char* p = "@.";
//	//strtok(arr, p);
//
//	char arr[] = "192.168.31.121";
//	char* p = ".";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	//切割buf中的字符串
//
//
//	//char* ret = strtok(arr, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	char*  ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL;ret=strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//
//	return 0;
//}

//strerrorr

//int main()
//{
//	//char*  str = strerror(errno);//errno  全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}



//字符分类  不是输出0

//int main()
//{
//	char ch = '@';
//	//int ret = islower(ch);
//	int ret = isdigit(ch);
//
//	printf("%d\n", ret);
//	return 0;
//}

//字符转换  tolower  toupper

//int main()
//{
//	//char ch = tolower('Q');
//	//printf("%c\n", ch);
//
//	char arr[] = "I AM A STUDENT";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//
//}


//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[10] = { 0 };
//	
//	//char* dest , const char*  src
//	strcpy(arr2, arr1);
//
//	return 0;
//}

//memcpy
//void* 无类型指针


//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	void* ret = dest;
//
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		((char*)dest)++;
//		((char*)src)++;
//	}
//	return ret;
//}
//
//
////int main()
////{
////	int arr1[] = { 1, 2, 3, 4, 5 };
////	int arr2[10] = { 0 };
////	struct S arr3[] = { { "张三", 20 }, { "李四", 30 } };
////	struct S arr4[3] = { 0 };
////	my_memcpy(arr4, arr3, sizeof(arr3));
////
////	//char* dest , const char*  src
////	strcpy(arr2, arr1);
////
////	my_memcpy(arr2, arr1, sizeof(arr1));
////
////	return 0;
////}
//
//
//
////C语言标准：
////memcpy 只要处理 不重叠的内存拷贝
////memmove 处理重叠的内存拷贝
//
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//
//}
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	/*my_memcpy(arr + 2, arr, 20);*/
//	
//	//memmove  处理重叠的情况
//
//	my_memmove(arr + 2, arr, 20);
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//
//	while (count--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	if (dest<src || dest>(char*)src + count)
//	{
//		//前 -> 后
//	}
//	else
//	{
//		//后 -> 前
//	}
//
//	//if (dest < src)
//	//{
// //       //前->后
//	//	while (count--)
//	//	{
//	//		*(char*)dest = *(char*)src;
//	//		++(char*)dest;
//	//		++(char*)src;
//	//	}
//	//}
//	//else
//	//{
//	//	//后->前
//	//	while (count--)
//	//	{
//	//		*((char*)dest + count) = *((char*)src + count);
//
//	//	}
//	//}
//	return ret;
//}
//
//
//int main()
//{
//	//int arr1[] = { 1, 2, 3, 4, 5 };
//	//int arr2[10] = { 0 };
//	////把arr1 中的数据 拷贝到 arr2
//	//my_memcpy(arr2, arr1, sizeof(arr1));
//
//	int arr3[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//my_memcpy(arr3 + 2, arr3, 20);
//
//	my_memmove(arr3 + 2, arr3, 20);
//
//
//	return 0;
//}


//memcmp

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	int ret = memcmp(arr1, arr2, 9);
//
//
//	printf("%d\n", ret);
//	return 0;
//
//}


//memset - 内存设置

//int main()
//{
//	//char arr[10] = "";
//	//memset(arr, '#', 10);
//
//	int arr[10] = { 0 };
//	memset(arr, 1, 10);
//	return 0;
//}



//声明一个结构体类型
//声明一个学生类型，通过学生类型来创建学生变量
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//	全局变量
//
//struct Stu s3; //全局变量
//
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;//局部变量
//	struct Stu s2;//局部变量
//
//	return 0;
//}


//匿名
//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;
//
//int main()
//{
//	return 0;
//}


//结构体自引用

//链表
//结点

//数据域  指针域  

//struct Node
//{
//	int data;
//	struct Node* next;
//};
//
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}



//typedef struct Node
//{
//	int date;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//
//	return 0;
//}


//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct S s = { 'c', 100, 3.14, "hello bit" };
//	struct S s = { 'c', { 55.6, 30 }, 100, 3.14, "hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf %d", s.st.weight,(int) s.st.age);
//
//	return 0;
//}


//结构体内存对齐

//计算大小

//对齐数
//最大对齐数整数倍

//VS 默认对齐数 8
//JCC 默认对齐数 （ 无 ）成员大小

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));
//	return 0;
//}


//修改默认对齐数

//#pragma
//设置默认对齐数为4
//#pragma pack(1)
//struct S
//{
//	char c1;
//	double d;
//};
//
//#pragma pack();
////取消设置默认对齐数
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}



//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int  main()
//{
//	//offsetof();求偏移量  宏
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}



//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
////传值
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
////传址
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
//int main()
//{
//
//	struct S s;
//	Init(&s);
//	Print1(s);//传值  结构体如果大  
//	Print2(&s);//传址 地址4/8字节
//	//struct S s;
//	//s.a = 100;
//	//s.c = 'w';
//	//s.d = 3.14;
//	//printf("%d\n", s.a);
//
//
//	return 0;
//}



//位段 - 二进制位
//

//struct A
//{
//	//比特位
//	int _a : 2;//占 2比特
//	int _b : 5;//
//	int _c : 10;
//	int _d : 30;
//	/*int e;*/
//};
//
////47bit - 6个字节 == 48bit
//
//int main()
//{
//	struct A a;
//	printf("%d\n", sizeof(a));
//	return 0;
//
//}



struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	 
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;


	return 0;
}