#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#include<Windows.h>


//�ֲ�����  -  ջ��
//ȫ�ֱ���  -  ��̬��

//ջ��   �ֲ����� �� ��������ʽ����
//����   ��̬�ڴ���� malloc\free\calloc\realloc
//��̬�� ȫ�ֱ��� �� ��̬���� static int a=10;

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	struct S arr[50];//50��struct S ���͵�����
//	//30��  �˷�
//	//60��  ����
//
//	return 0;
//}


//malloc

//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(INT_MAX);
//	if (p == NULL)
//	{
//		//�Է���ֵ���м��
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬����Ŀռ䲻��ʹ��ʱ
//	//��Ӧ�û�������ϵͳ
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
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//realloc  ������̬�ڴ濪�ٿռ�Ĵ�С

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
//	//������ʹ��malloc���ٵ�20���ֽڵĿռ�
//	//�������20���ֽڲ����������ǵ�ʹ����
//	//ϣ����������40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//	
//
//
//
//	//realloc ʹ��ע������
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
//	//��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ
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
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}






//int main()
//{
	//1.��NULL���н����ò���

	//int* p = (int*)malloc(40);
	////��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
	//*p = 0;//err

	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;


	//2.�Զ�̬���ٵ��ڴ��Խ�����

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



	//3.�ԷǶ�̬�����ڴ��free

	//int a = 10;//ջ��
	//int* p = &a;
	//*p = 20;

	//free(p);
	//p = NULL;


	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
	//freeֻ�ܴӶ�̬���ٵ��ڴ�ռ����ʼλ���ͷ�

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
	////���տռ�
	//free(p);
	//p = NULL;




	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�

	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////ʹ��
	////�ͷ�
	//free(p);
	//p = NULL;
	////...
	//free(p);


	//6.��̬�����ڴ������ͷţ��ڴ�й©��

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





//����������

//����
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//str��ֵ���ݵ���ʽ��p��pʱGetMemory�������βΣ�ֻ�ܺ����ڲ���Ч
//	                       //��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷţ������޷��ҵ������Ի�����ڴ�й©
//
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");//str ==NULL  �������
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//��һ�ָķ�
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


//�ڶ��ָķ�
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




//�ڶ���
//����ջ�ռ�ĵ�ַ������  ջ��  �ֲ�����  ������������


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
//	int a = 10;//ջ��
//	//static int b = 10;//����  b �ھ�̬��
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
//	int* ptr = malloc(100);//����  ����
//	return ptr;
//}
//
//
//int main()
//{
//	int *p = test();
//	return 0;
//}



//������


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
//	printf(str);//�����ͷŶ�̬���ٵ��ڴ棬�����ڴ�й©
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//���ĵ�


//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free�ͷ�strָ��Ŀռ�󣬲������str��ΪNULL
//	if (str != NULL)
//	{
//		strcpy(str, "world");//�Ƿ������ڴ�
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}



//��������


//struct S
//{
//	int n;
//	int arr[10];
//};

//struct S
//{
//	int n;
//	int arr[0];//δ֪��С -- ���������Ա - ����Ĵ�С�ǿ��Ե�����
//	//�� == int arr[];
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
//	//�ͷ�
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
//	//������С
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
//	//�ͷ��ڴ�
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
//	int arr[0];//���������Ա
//};


//struct S
//{
//	int n;
//	char c;
//	int arr[];//���������Ա
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