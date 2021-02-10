#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//		while (*dest++ = *src++)
//		{
//			;
//		}
//
//}
//
//int main()
//{
//	//strcpy  字符串拷贝
//	char arr1[] = "##################";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	const int num = 10;
//	const int* p = &num;
//	*p = 20;//err const 放在指针变量*左边时，修饰*p，不能通过p改变*p
//	int * const p = &num;
//	int a = 0;
//	p = &a;//err  const p不能改变
//	printf("%d\n", num);
//	return 0;
//}



//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);
//		while (*dest++ = *src++)
//		{
//			;
//		}
//		return ret;
//}
//
//int main()
//{
//	//strcpy  字符串拷贝
//	char arr1[] = "##################";
//	char arr2[] = "bit";
//	
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}


//strlen

//int my_strlen(const char* str)
//{
//	int count = 0;
//	//断言
//	assert(str != '\0');//保证指针的有效性
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int  len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	float f = 10.0;
//	short b = 10;
//	short int c = 10;
//	long int d = 10;
//	return 0;
//}

//void  test(int  y)
//{
//	unsigned int x = (unsigned int)y;
//	printf("%d\n", x);
//}
//
//int main()
//{
//	int a = -1;
//	test(a);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = -20;
//	return 0;
//
//}

//int main()
//{
//	int a = 1;
//	char * p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}

int check_sys()
{
	int a = 1;
	//char* p = &a;
	////返回1，小端
	////返回0，大端
	//return *p;
	return *(char*)&a;
}

int main()
{
	//返回1，小端
	//返回0，大端
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
	return 0;
}

//(char*)&a;

//-128
//100000000000000000000000000010000000
//111111111111111111111111111101111111
//111111111111111111111111111110000000-补码
//10000000 
//111111111111111111111111111110000000-整形提升
//%u--十进制无符号数字

//0000000000000000000000000000010000000
//10000000
//1111111111111111111111111111110000000

