#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


//100000000000000000000000010100  -20
//111111111111111111111111101011  ȡ��
//111111111111111111111111101100  ����

//000000000000000000000000001010  10

//111111111111111111111111110110  
//111111111111111111111111110101   -1
//100000000000000000000000001010   -10

//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}

//int main()
//
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//1111111111111111111111
//100000000000000100000001
//111111111111111011111110
//111111111111111011111111  

//9 8 7 6 5 4 3 2 1 0 2^32-1  ... 0


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));
//	return 0;
//}

// a[i]  -1  -2   .....  -1000

//-1  10000000000000000001
//    11111111111111111111
//    11111111111111111111

//-256 1000000000000100000000
//     1111111111111011111111
//     1111111111111100000000
//     1111111111111100000000  ��������
// 255 

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//
//}

//������  ���ڴ��еĴ洢

//int main()
//{
//	double d = 1E10;
//	printf("%lf\n", d);
//	return 0;
//}

//9.0
//1001.0
//(-1)^0*1.001*2^3
//(-1)^S*M    *2^E

//int main()
//{
//	float  f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0*1.011*2^2
//	//S=0,M=1.011, E=2
//	//0  2+127 10000001   011000000000000000000000000
//	//0100 0000 1011 0000 0000 0000 0000 0000 0000
//	//0x40b00000
//	//
//	return 0;
//}

//int main()
//{
//	(*(void(*)())0)();//void(*)() - ����ָ������
//	//��0ǿ������ת���ɣ�void(*)() 
//
//	void(*signal(int, void(*)(int)))(int);//��������
//  signal��һ����������
//  signal�����Ĳ����������� int�� ����ָ������  �ĺ���ָ��ָ��ĺ����Ĳ�����int������������void
//  signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int ������������viod

//
//
//	return 0;
//}

//��
//typedef void(*pfun_t)(int);
//pfun_t signal(int, void(*)(int));
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int(*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	printf("%d\n", (***pa)(2, 3));
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int  Mul(int x, int  y)
//{
//	return x*y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	//ָ������
//	int* arr[5];//
//	//��Ҫһ�����飬���4�������ĵ�ַ--����ָ������
//	int(*pa)(int, int) = Add;//Sub,Mul,Div
//	int(*parr[4])(int, int) = { Add, Sub, Mul, Div };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n",parr[i](2, 3));//5,-1,6,0
//	}
//
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//дһ������ָ��pf��ָ��my_strcpy
//дһ������ָ������pfArr�����4��my_strcpy�����ĵ�ַ

//char* (*pf)(char*, const char*)=my_strcpy;
//       char* (*pfArr[4])(char*,const char*);



//������

//void menu()
//{
//	printf("*********************************\n");
//	printf("********1. add      2. sub*******\n");
//	printf("********3. mul      4. div*******\n");
//	printf("**              0. exit        **\n");
//	printf("*********************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x /y;
//}
//
//int XOR(int x, int y)
//{
//	return x^y;
//}
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//
//	//pfArr �Ǻ���ָ������  ת�Ʊ�
//	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, XOR };
//
//
//	do
//	{
//		menu();
//		printf("������:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("������������������>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//
//		
//	} while (input);
//	return 0;
//}

//
//void calc(int(*pf)(int,int))
//{
//	printf("%d\n", pf(2, 3));
//}


//switch (input)
//{
//case 1:
//	printf("%d\n", Add(x, y));
//	break;
//case 2:
//	printf("%d\n", Sub(x, y));
//	break;
//case 3:
//	printf("%d\n", Mul(x, y));
//	break;
//case 4:
//	printf("%d\n", Div(x, y));
//	break;
//case 0:
//	printf("�˳�\n");
//	break;
//default:
//	printf("ѡ�����\n");
//	break;
//}

//int Add(int x, int y)
//{
//
//}
//
//int main()
//{
//	printf("%d\n", Add(2, 3));
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int(*pfArr[4])(int, int);//����ָ�������
//	//ppfArr
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr - ����ָ��  ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)
//	return 0;
//}

//void print(char *str)
//{
//	printf("hehe:%s", str);
//}
//
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//
//int main()
//{
//	test(print);
//	return 0;
//}


//void BubbleSort(int arr[], int sz)
//{
//	//...
//}
//
////qsort  - ���������������͵�����
//
//int main()
//{
//	//ð������
//	//ֻ��������������
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int* (*pa)[10] = &arr;
//	//����ָ��
//	int(*paAdd)(int, int) = Add;
//
//	int sum = (*paAdd)(1, 2);
//	printf("%d\n", sum);
//
//	//����ָ�������
//
//	int(* pArr[4])(int, int);
//
//	//ָ����ָ�������ָ��
//	int(*(*ppArr)[4])(int, int) = &pArr;
//
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ
//	return *(int*)e1 - *(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int cmp_float(const void* e1, const void* e2)
//{
//	//�Ƚ�  ������
//
//	if (*(float*)e1 == *(float*)e2)
//	{
//		return 0;
//	}
//	else if (*(float*)e1 > *(float*)e2)
//	{
//		return 1;
//	}
//	else
//		return -1;
//
//	/*return ((int)(*(float*)e1 - *(float*)e2));*/
//	
//}
//
//void test2()
//{
//	float f[] = { 9.0, 8.1, 7.2, 6.3, 5.4, 4.5, 3.6, 2.1, 1.0 };
//
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//	printf("\n");
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ��ַ���
//	//strcmp
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[3] = { { "zhangsan", 30 }, { "lisi", 20 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//
//
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//
//	//��һ���������������������Ԫ�ص�ַ
//	//�ڶ��������������������Ԫ�ظ���
//	//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//	//            ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
//}
//
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//
//
//void bubble_sort(void*base ,int sz,int width,int (*cmp)(void*e1,void*e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0 )
//			{
//				//����
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
//			}
//		}
//	}
//}
//
//void test4()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//}
//
//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 30 }, { "lisi", 20 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s,sz,sizeof(s[0]),cmp_stu_by_age);
//}
//
//int main()
//{
//	
//	
//	
//	//test1();
//	//test2();
//	//test3();
//	//
//	/*test4();*/
//	test5();
//
//
//	//bubble_sort(arr, sz);
//	//int i = 0;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//printf("\n");
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;
//	void* p = &a;
//	//*p = 0;
//	
//	//void* ���͵�ָ��  ���Խ��������������ݵĵ�ַ 
//	//void* ���͵�ָ��  ���ܽ��н����ò���
//	//void* ���͵�ָ��  ���ܽ���++/--����
//	return 0;
//}


//int main()
//{
	//&arr  �����ַ



	//��������
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16
	//a+0   4    ��Ԫ�ص�ַ  ָ�� 4/8
	//*a    4    int
	//a+1   4    ��ַ
	//a[1]  4    int
	//&a    4   �����ַ         xxxxxxxxxxx(16)
	//*&a   16                   xxxxxxxxxxx(4)
	//&a+1  4
	//&a[0] 4
 //&a[0]+1  4


	//�ַ�����
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));//6
	//arr+0     4
	//*arr      1
	//arr[1]    1
	//&arr      4
	//&arr+1    4
	//&arr[0]+1 4


	//strlen(��ַ��
	//printf("%d\n", strlen(arr));//�����  
	//arr+0      ���ֵ
	//*arr       err           'a'- 97      xxxxxxxxxxx(2)
	//arr[1]     err                        xxxxxxxxxxx(2)
	//&arr       ���
	//&arr+1     ���-6
	//&arr[0]+1  ���-1                       xxxxxxxxxxx(2)


	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7
	//arr+0        4   ��ַ
	//*arr         1   *arr-��Ԫ�أ�sizeof��*arr��������Ԫ�ش�С   
	//arr[1]       1   �ڶ���Ԫ�ش�С
	//&arr         4   ��ַ
	//&arr+1       4   ��ַ
	//&arr[0]+1    4   ��ַ

	//printf("%d\n", strlen(arr));//6
	//arr+0         6
	//*arr          err
	//arr[1]        err
	//&arr          6
	//&arr+1        ���ֵ
	//&arr[0]+1     5


	//char* p = "abcdef";//�����ַ���  ��Ԫ�ص�ַ -> p
	//printf("%d\n", sizeof(p));//4
	//p+1         4
	//*p          1
	//p[0]        1
	//&p          4
	//&p+1        4
	//&p[0]+1     4                    xxxxxxxxxxx(1)


	//printf("%d\n", strlen(p));//6
	//p+1              5
	//*p               err
	//p[0]             err
	//&p               ���ֵ
	//&p+1             ���ֵ
	//&p[0]+1          5



	//��ά����
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//  3*4*4=48
	//a[0][0]          4
	//a[0]             16   a[0]  �൱�ڵ�һ����Ϊһά�������������
	//                      sizeof��arr[0]������������������sizeof()�ڣ�������ǵ�һ�еĴ�С
	//a[0]+1           4    ��һ�еڶ���Ԫ�صĵ�ַ         xxxxxxxx(16)  
	//                      a[0]�ǵ�һ�е�����������������ʱ����Ԫ�ص�ַ��a[0]��ʵ���ǵ�һ�е�һ�е�Ԫ�ص�ַ����ַ��С��4/8�ֽ�
	//*(a[0]+1)        4    int    
	//a+1              4    �ڶ�������ĵ�ַ    
	//                      a�Ƕ�ά�������������û��sizeof��������������û��&����������������a����Ԫ�ص�ַ
	//                      ���Ѷ�ά���鿴��һά����ʱ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�У���Ԫ�أ��ĵ�ַ
	//                      a+1���ǵڶ��еĵ�ַ
	//*(a+1)           16   ����ڶ��д�С      
	//&a[0]+1          4    �ڶ��е�ַ
	//*(&a[0]+1)       16   �ڶ��д�С
	//*a               16   ��һ�д�С
	//a[3]             16   �����д�С   sizeof�����ڱ��ʽ�����㣬������ʵ�����


//
//	return 0;
//}





//ָ�������
//


//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 }; 
//	int* ptr = (int*)(&a + 1);    // int(*ptr)[5]=&a;
//	printf("%d,%d", *(a + 1), *(ptr - 1));// 2,5
//	return 0;
//}


//struct Test
//{
//	int Num;   
//	char* pcName;  
//	short sDate;   
//	char cha[2];   
//	short sBa[4];
//}* p;
//
////����p��ֵΪ0x100000�����±��ʽ��ֵ�ֱ��Ƕ���
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//
//int main()
//{
//	p = (struct Test*)0x00100000;
//	printf("%p\n", p + 0x1); //0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004
//	return 0;
//}


//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };//0x00 00 00 01 00 00 00 02
//	                          //0x10 00 00 00 10 00 00 00
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);//0x4, 0x02 00 00 00 
//	return 0;
//}


//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) }/*{ { 0, 1 }, { 2, 3 }, { 4, 5 } }*/;
//	int *p;       //���ű��ʽ
//	p = a[0];
//	printf("%d", p[0]);//1
//	return 0;
//}


//int main()
//{
//	int a[5][5];// o o o o o
//	            // o o o o o
//	            // o o o o o
//	            // o o o 0 o 
//	            // o o 1 o o
//	int(*p)[4];
//	p = a;//a��Ԫ�ص�ַ  a[0] ��һ�е�ַ
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//  ,-4    
//	//-4
//	//10000000 00000000 00000000 00000100
//	//11111111 11111111 11111111 11111011
//	//11111111 11111111 11111111 11111100
//  //0xff ff ff fc 
//	return 0;
//}


//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//	int *ptr1 = (int*)(&aa + 1);
//	int *ptr2 = (int*)(*(aa + 1));//*(aa+1)==aa[1]    �ڶ�����Ԫ�ص�ַ
//	
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//10,5
//
//	return 0;
//}


//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };//ָ������  �������Ԫ�� ���ַ�����Ԫ�ص�ַ
//	char** pa = a;
//
//	pa++;
//	printf("%s\n", *pa);//at       xxxxxxxxxx(orkatalibaba)
//
//	return 0;
//}

//  char *p = "abcdef";


//int main()
//{
//	char* c[] = { "ENTER", "NEW", "POINT", "FIRST" };
//	char** cp[] = { c + 3, c + 2, c + 1, c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp); //point
//	printf("%s\n", *--*++cpp + 3);//er    xxxxxx(new)
//	printf("%s\n", *cpp[-2] + 3);//*(cpp-2)   st
//	printf("%s\n", cpp[-1][-1] + 1);//ew
//	
//	
//	return 0;
//}


//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//
//	c = a + b;//��������
//	//00000000 00000000 00000000 1100 1000
//	//                           0110 0100
//    //                         1 0010 1100    
//	//0010 1100 --c
//	printf("%d %d", a + b, c);// 300 ( 0000000 00000001 0010 1100 )    / 44( 0000000000 0010 1100 )
//
//	return 0;
//}

//
//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	printf("%d\n", b);//32λ  ����ֽ���洢ģʽ
//	return 0;
//	//-127
//	//11111111
//	//-128
//	//10000000
//	//11111111
//	//00000000
//	//10000001
//	//
//}


//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//				{
//					arr[i][j] = 1;
//				}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	//��ӡ
//
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//������
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}


//����
//36��  6�ܵ�  û�м�ʱ��  ��ǰ��

//25    5     ǰ��



//����

//���ʲ�����һ��������1��Сʱ
//�������㣬ȷ��15����

//int main()
//{
//	
//	int a, b, c, d, e;
//	for (a = 0; a < 6; a++)
//	{
//		for (b = 0; b < 6; b++)
//		{
//			for (c = 0; c < 6; c++)
//			{
//				for (d = 0; d < 6; d++)
//				{
//					for (e = 0; e < 6; e++)
//					{
//						if (((b==2) + (a==3))==1&&
//							((b==2)+(e==4))==1&&
//							((c == 1) + (d == 2) )== 1 &&
//							((c == 5) + (d == 3)) == 1 &&
//							((e == 4) + (a == 1) )== 1)
//						{
//							if (a*b*c*d*e==120)
//							printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//							}
//					}
//				}
//			}
//		}
//	}
//	
//	return 0;
//}


//int main()
//{
//	int a[5] = { 5, 4, 3, 2, 1 };
//	int *ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//
//	return 0;
//}



//��ת�ַ���

//ABCD--BCDA--һ���ַ�
//������ⷨ
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k ; i++)
//	{
//		//����һ���ַ�
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len - 1 ; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//	return 0;
//}


//������ת��

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);//�������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//��������
//}
//
//
//int main()
//
//{
//	char arr[] = "abcdef";
//	left_move(arr, 4);
//
//	printf("%s\n", arr);
//	return 0;
//}

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);//�������
//	reverse(arr + k, arr + len - 1);//�����ұ�
//	reverse(arr, arr + len - 1);//��������
//}
//
//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//		printf("NO\n");
//
//	return 0;
//}


//������

//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//
//	//1.str1-->abcdefabcdef  ׷��
//	//strcat(str1, str1);//err
//	strncat(str1, str1, 6);
//
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr--���Ӵ���
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//		printf("No\n");
//	return 0;
//}


//���Ͼ���

int FindNum(int arr[3][3], int k, int *px, int *py)
{
	int x = 0;
	int y = *py - 1;
	while (x<*px,y>=0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
	int k = 7;
	int x = 3;
	int y = 3;
	//�����Ͳ���
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("�ҵ���\n");
		printf("�±���%d %d\n", x+1, y+1);
	}
	else
		printf("�Ҳ���\n");
	return 0;
}