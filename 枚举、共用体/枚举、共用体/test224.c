#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ-����
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

//c���Ե�Դ����--Ԥ����--->����----����----��ִ�г���



//����-������--������


//union Un
//{
//	//����ͬʱʹ��
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



//�жϴ�ˡ�С�˴洢

//case 1
//int check_sys()
//{
//	int a = 1;
//	//����1��ʾС��
//	//����0��ʾ���
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
//	//����1 ��ʾС��
//	//����0 ��ʾ���
//	return u.c;
//}
//
//int main()
//{
//	//int a = 0x11223344;
//	//�͵�ַ------------------------------------->�ߵ�ַ
//	//����ֽ���洢ģʽ
//	//С���ֽ���洢ģʽ
//	//
//	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
//	//��С���ֽ�������
//
//
//	int a = 1;
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��");
//	}
//	else
//		printf("���");
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
//	printf("%d\n", sizeof(s));//enum ��С 4�ֽ�
//	return 0;
//}


union Un
{
	int a;//4   ������ 4
	char arr[5];//5   ������ 1
};

int main()
{
	union Un u;
	printf("%d\n", sizeof(u));
	//�������С����������Ա�Ĵ�С
	//������Ա��С��������������������ʱ����Ҫ���뵽����������������

	return 0;
}