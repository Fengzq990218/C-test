#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);//����
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
//	//strcpy  �ַ�������
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
//	*p = 20;//err const ����ָ�����*���ʱ������*p������ͨ��p�ı�*p
//	int * const p = &num;
//	int a = 0;
//	p = &a;//err  const p���ܸı�
//	printf("%d\n", num);
//	return 0;
//}



//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//����
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
//	//strcpy  �ַ�������
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
//	//����
//	assert(str != '\0');//��ָ֤�����Ч��
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
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}

int check_sys()
{
	int a = 1;
	//char* p = &a;
	////����1��С��
	////����0�����
	//return *p;
	return *(char*)&a;
}

int main()
{
	//����1��С��
	//����0�����
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
	return 0;
}

//(char*)&a;

//-128
//100000000000000000000000000010000000
//111111111111111111111111111101111111
//111111111111111111111111111110000000-����
//10000000 
//111111111111111111111111111110000000-��������
//%u--ʮ�����޷�������

//0000000000000000000000000000010000000
//10000000
//1111111111111111111111111111110000000

