#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	double a = 5.0 / 2;
//	double b= 5 % 2;
//	printf("a = %f\n", a);
//	printf("b = %f\n", b);
//	return 0;
//}

//int main()
//{
//	int a = -1;
//	int b = 5;
//	//>> --右移操作符
//	//移动 二进制
//	//00000000 00000000 00000000 00010000
//	//*1、算术右移（右边丢弃，左边补符号位）  2、逻辑右移（右边丢弃，左边补0）
//	//10000000000000000000000001
//	//11111111111111111111111110
//	//11111111111111111111111111
//	//
//	a >>= 1;
//	b <<= 1;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}

//int main()
//{
//	//& - 按位与
//	int a = 3;
//	int b = 5;
//	int c = a&b;
//	int d = a | b;
//	int e = a^b;
//	printf("e = %d\n", e);
//	printf("d = %d\n", d);
//	//011
//	//101;
//	//001;
//	printf("c = %d\n", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 5;
//	////加减法--可能会溢出
//	//a = a + b;
//	//b = a - b;
//	//a = a - b;
//
//	//异或法
//	//a: 011
//	//b: 101
//	//a^b110
//
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("a = %d\n", a);
//	printf("b = %d\n", b);
//	return 0;
//}


//int main()
//{
//	int count = 0;
//	int num = 0;
//	scanf("%d", &num);
//	//num 补码中1的个数
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//	{
//	//		count++;
//	//	}
//	//	num = num / 2;
//	//}
//	/*int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i )& 1))
//			count++;
//		
//	}*/
//
//
//
//	printf("count = %d\n", count);
//	return 0;
//}

//
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		count++;
//		num = num&(num - 1);
//	}
//	//-1
//	//11111111 11111111 11111111 11111111
//	//-2
//	//10000000 00000000 00000000 00000010
//	//11111111111111111111111111111111101
//	//11111111111111111111111111111111110
//
//	//-1&-2
//	//11111111111111111111111111111111110
//	//-3
//	//10000000000000000000000000000000011
//	//11111111111111111111111111111111100
//	//11111111111111111111111111111111101
//
//	printf("%d\n", count);
//	return  0;
//}
//void test(char ch[])
//{
//	printf("%d\n", sizeof(ch));//****
//}
//int main()
//{
//	//short s = 0;
//	//int a = 10;
//	//printf("%d\n", sizeof(s = a + 5));
//	////sizeof(),()不参与运算
//	//printf("%d\n", s);
//
//
//	//int a = 0;
//	////~--按位取反
//	//printf("%d\n", ~a);
//
//
//	/////*int a = 11;
//	////int b = 15;
//	////a = a | (1 << 2);
//	////b = b&(~(1 << 2));
//	////printf("%d\n", a);
//	////printf("%d\n", b);*/
//
//	char ch[10] = { 0 };
//	test(ch);
//
//
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	//i = a++&&++b&&d++;
//	i = a++ || ++b || d++;
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	//1,3,
//	return 0;
//}

//&&  找到假，后面就不用算了
//||  找到真，后面就不用算了

//int main()
//{
//	int a = 3;
//	int b = 5;
//	int max = 0;
//
//	max = (a > b ? a : b);
//	printf("max = %d\n", max);
//		return 0;
//}

//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;
//
//	return 0;
//}

//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct Stu s1 = { "张三", 20, "1715406066" };
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);
//	struct Stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	printf("%s\n", ps->id);
//
//	return 0;
//}
//
//int main()
//{
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//	//000000000    00000011
//	//             01111111
//	//111111111111 10000010
//	//111111111111 10000001
//	//100000000000001111110
//	return 0;
//}

int main()
{
	char c = 1;
	printf("%u\n", sizeof(c));
	printf("%u\n", sizeof(+c));
	printf("%u\n", sizeof(!c));
	return 0;
}