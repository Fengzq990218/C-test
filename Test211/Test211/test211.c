#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>


//100000000000000000000000010100  -20
//111111111111111111111111101011  取反
//111111111111111111111111101100  补码

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
//     1111111111111100000000  整形提升
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

//浮点数  在内存中的存储

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
//	(*(void(*)())0)();//void(*)() - 函数指针类型
//	//把0强制类型转换成：void(*)() 
//
//	void(*signal(int, void(*)(int)))(int);//函数声明
//  signal是一个函数声明
//  signal函数的参数有两个， int和 函数指针类型  改函数指针指向的函数的参数是int，返回类型是void
//  signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数是int ，返回类型是viod

//
//
//	return 0;
//}

//简化
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
//	//指针数组
//	int* arr[5];//
//	//需要一个数组，存放4个函数的地址--函数指针数组
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
//写一个函数指针pf，指向my_strcpy
//写一个函数指针数组pfArr，存放4个my_strcpy函数的地址

//char* (*pf)(char*, const char*)=my_strcpy;
//       char* (*pfArr[4])(char*,const char*);



//计算器

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
//	//pfArr 是函数指针数组  转移表
//	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div, XOR };
//
//
//	do
//	{
//		menu();
//		printf("请输入:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数：>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
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
//	printf("退出\n");
//	break;
//default:
//	printf("选择错误\n");
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
//	int (*p)[10] = &arr;//取出数组的地址
//
//	int(*pfArr[4])(int, int);//函数指针的数组
//	//ppfArr
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//ppfArr - 数组指针  指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int,int)
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
////qsort  - 可以排序任意类型的数组
//
//int main()
//{
//	//冒泡排序
//	//只能排序整形数组
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
//	//指针数组
//	int* arr[10];
//	//数组指针
//	int* (*pa)[10] = &arr;
//	//函数指针
//	int(*paAdd)(int, int) = Add;
//
//	int sum = (*paAdd)(1, 2);
//	printf("%d\n", sum);
//
//	//函数指针的数组
//
//	int(* pArr[4])(int, int);
//
//	//指向函数指针数组的指针
//	int(*(*ppArr)[4])(int, int) = &pArr;
//
//	return 0;
//}

//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//一趟冒泡排序
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
//	//比较两个整形值
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
//	//比较  浮点型
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
//	//比较字符串
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
//	//第一个参数：待排序数组的首元素地址
//	//第二个参数：待排序数组的元素个数
//	//第三个参数：待排序数组的每个元素的大小-单位是字节
//	//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
//	//            函数指针的两个参数是：待比较的两个元素的地址
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
//	//趟数
//	for (i = 0; i < sz; i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0 )
//			{
//				//交换
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
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
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
//	//void* 类型的指针  可以接受任意类型数据的地址 
//	//void* 类型的指针  不能进行解引用操作
//	//void* 类型的指针  不能进行++/--操作
//	return 0;
//}


//int main()
//{
	//&arr  数组地址



	//整形数组
	//int a[] = { 1, 2, 3, 4 };
	//printf("%d\n", sizeof(a));//16
	//a+0   4    首元素地址  指针 4/8
	//*a    4    int
	//a+1   4    地址
	//a[1]  4    int
	//&a    4   数组地址         xxxxxxxxxxx(16)
	//*&a   16                   xxxxxxxxxxx(4)
	//&a+1  4
	//&a[0] 4
 //&a[0]+1  4


	//字符数组
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));//6
	//arr+0     4
	//*arr      1
	//arr[1]    1
	//&arr      4
	//&arr+1    4
	//&arr[0]+1 4


	//strlen(地址）
	//printf("%d\n", strlen(arr));//随机数  
	//arr+0      随机值
	//*arr       err           'a'- 97      xxxxxxxxxxx(2)
	//arr[1]     err                        xxxxxxxxxxx(2)
	//&arr       随机
	//&arr+1     随机-6
	//&arr[0]+1  随机-1                       xxxxxxxxxxx(2)


	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7
	//arr+0        4   地址
	//*arr         1   *arr-首元素，sizeof（*arr）计算首元素大小   
	//arr[1]       1   第二个元素大小
	//&arr         4   地址
	//&arr+1       4   地址
	//&arr[0]+1    4   地址

	//printf("%d\n", strlen(arr));//6
	//arr+0         6
	//*arr          err
	//arr[1]        err
	//&arr          6
	//&arr+1        随机值
	//&arr[0]+1     5


	//char* p = "abcdef";//常量字符串  首元素地址 -> p
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
	//&p               随机值
	//&p+1             随机值
	//&p[0]+1          5



	//二维数组
	//int a[3][4] = { 0 };
	//printf("%d\n", sizeof(a));//  3*4*4=48
	//a[0][0]          4
	//a[0]             16   a[0]  相当于第一行作为一维数组的数组名，
	//                      sizeof（arr[0]）把数组名单独放在sizeof()内，计算的是第一行的大小
	//a[0]+1           4    第一行第二个元素的地址         xxxxxxxx(16)  
	//                      a[0]是第一行的数组名，数组名此时是首元素地址，a[0]其实就是第一行第一列的元素地址，地址大小是4/8字节
	//*(a[0]+1)        4    int    
	//a+1              4    第二行数组的地址    
	//                      a是二维数组的数组名，没有sizeof（数组名），与没有&（数组名），所以a是首元素地址
	//                      而把二维数组看成一维数组时，二维数组的首元素是他的第一行，a就是第一行（首元素）的地址
	//                      a+1就是第二行的地址
	//*(a+1)           16   计算第二行大小      
	//&a[0]+1          4    第二行地址
	//*(&a[0]+1)       16   第二行大小
	//*a               16   第一行大小
	//a[3]             16   第四行大小   sizeof（）内表达式不计算，不会访问第四行


//
//	return 0;
//}





//指针笔试题
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
////假设p的值为0x100000，如下表达式的值分别是多少
////已知，结构体Test类型的变量大小是20个字节
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
//	int *p;       //逗号表达式
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
//	p = a;//a首元素地址  a[0] 第一行地址
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
//	int *ptr2 = (int*)(*(aa + 1));//*(aa+1)==aa[1]    第二行首元素地址
//	
//	printf("%d,%d\n", *(ptr1 - 1), *(ptr2 - 1));//10,5
//
//	return 0;
//}


//int main()
//{
//	char *a[] = { "work", "at", "alibaba" };//指针数组  存放三个元素 各字符串首元素地址
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
//	c = a + b;//整形提升
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
//	printf("%d\n", b);//32位  大端字节序存储模式
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
//	//打印
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


//猜凶手
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


//赛马
//36马  6跑道  没有计时器  找前三

//25    5     前三



//烧香

//材质不均，一根香烧完1个小时
//有两根香，确定15分钟

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



//旋转字符串

//ABCD--BCDA--一个字符
//暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k ; i++)
//	{
//		//左旋一个字符
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


//三步翻转法

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
//	reverse(arr,arr+k-1);//逆序左边
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序整体
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
//	reverse(arr, arr + k - 1);//逆序左边
//	reverse(arr + k, arr + len - 1);//逆序右边
//	reverse(arr, arr + len - 1);//逆序整体
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


//方法二

//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//
//	//1.str1-->abcdefabcdef  追加
//	//strcat(str1, str1);//err
//	strncat(str1, str1, 6);
//
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr--找子串的
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


//杨氏矩阵

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
	//返回型参数
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了\n");
		printf("下表是%d %d\n", x+1, y+1);
	}
	else
		printf("找不到\n");
	return 0;
}